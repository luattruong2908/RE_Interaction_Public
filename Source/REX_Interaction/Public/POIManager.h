#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "POIManager.generated.h"

class UCustomHISMC;
class UStaticMesh;
class UMaterialInterface;
class UPrimitiveComponent;

// Which POI kind a manager bakes/deletes. Lets two managers coexist in one level
// (one PlaneOnly for rooms, one HouseOnly for houses) without touching each other's actors.
UENUM()
enum class EPOIBakeScope : uint8
{
    PlaneAndHouse UMETA(DisplayName = "Plane + House"),
    PlaneOnly UMETA(DisplayName = "Plane Only"),
    HouseOnly UMETA(DisplayName = "House Only"),
};

// One baked POI. BakedEntries is the serialized source of truth; the HISMs are
// Transient and rebuilt from it on every load (see RebuildHISMs).
// Do NOT rename fields -- that breaks data already baked into maps.
USTRUCT()
struct FPOIBakeEntry
{
    GENERATED_BODY()

    // Key into the POI DataTable (read from the source actor via reflection).
    UPROPERTY(VisibleAnywhere, Category = "POI")
    FString POI_ID;

    // Display mesh: the Plane of BP_POI_Room, or the Cube itself for BP_POI_House.
    // Also the grouping key -- one display HISM per distinct mesh.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    TObjectPtr<UStaticMesh> PlaneMesh = nullptr;

    // World transform of the display mesh.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    FTransform PlaneTransform = FTransform::Identity;

    // World transform of the click volume.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    FTransform CubeTransform = FTransform::Identity;

    // Camera spring arm settings captured from the source POI at bake time.
    // The pawn reads these when the player clicks a POI and applies them to its own spring arm.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    float CameraYaw = 0.f;

    UPROPERTY(VisibleAnywhere, Category = "POI")
    float CameraPitch = -45.f;

    UPROPERTY(VisibleAnywhere, Category = "POI")
    float CameraArmLength = 800.f;
};

// Per-slot materials of one plane mesh kind, captured at bake time. Only true
// overrides are stored; null = inherit the mesh's own material.
USTRUCT()
struct FPlaneMaterialSet
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<TObjectPtr<UMaterialInterface>> Materials;
};

// Result of a POI click: camera settings for the pawn's spring arm.
USTRUCT(BlueprintType)
struct FPOIHitResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "POI")
    float CameraYaw = 0.f;

    UPROPERTY(BlueprintReadOnly, Category = "POI")
    float CameraPitch = -45.f;

    UPROPERTY(BlueprintReadOnly, Category = "POI")
    float CameraArmLength = 800.f;
};

// Runtime data of one POI, indexed by cube instance index.
// Transient -- rebuilt from BakedEntries on load.
USTRUCT()
struct FPOIRuntimeInstance
{
    GENERATED_BODY()

    UPROPERTY()
    FString POI_ID;

    // Index into PlaneHISMs (INDEX_NONE if this POI has no display mesh).
    UPROPERTY()
    int32 PlaneHISMIndex = INDEX_NONE;

    // Instance index inside that plane HISM.
    UPROPERTY()
    int32 PlaneInstanceIndex = INDEX_NONE;

    // Cached show/hide state, used to skip hidden POIs on click.
    UPROPERTY()
    bool bVisible = true;

    // Camera spring arm data (copied from BakedEntries at rebuild time).
    UPROPERTY()
    float CameraYaw = 0.f;

    UPROPERTY()
    float CameraPitch = -45.f;

    UPROPERTY()
    float CameraArmLength = 800.f;
};

// Base POI manager (Abstract -- place the subclasses below instead).
// Bakes hundreds/thousands of source POI actors into a few HISMs: one shared
// invisible cube HISM for clicks + one display HISM per distinct mesh. All visual
// state (show/hide, color, selection) is per-instance custom data read by the
// material on the GPU -- no per-frame CPU work, no per-instance SetVisibility.
UCLASS(Abstract)
class REX_INTERACTION_API APOIManager : public AActor
{
    GENERATED_BODY()

public:
    APOIManager();

    // ---- Editor buttons ----

    // Scans the level for source POI actors (per BakeScope), fills BakedEntries,
    // rebuilds the HISMs. Idempotent -- re-running re-bakes from scratch.
    UFUNCTION(CallInEditor, Category = "POI")
    void BakeFromLevel();

    // Destroys the source POI actors in this manager's scope. Run AFTER baking.
    // Not undoable -- if pressed by mistake, do not save the map.
    UFUNCTION(CallInEditor, Category = "POI")
    void DeleteSourcePOIs();

    // ---- Runtime API ----

    // Filter: only POIs whose ID is in VisibleIds are shown.
    UFUNCTION(BlueprintCallable, Category = "POI")
    void ApplyVisibleSet(const TSet<FString>& VisibleIds);

    // Inverse filter: POIs whose ID is in HiddenIds are hidden, the rest shown.
    UFUNCTION(BlueprintCallable, Category = "POI")
    void ApplyHiddenSet(const TSet<FString>& HiddenIds);

    UFUNCTION(BlueprintCallable, Category = "POI")
    void ShowAll();

    UFUNCTION(BlueprintCallable, Category = "POI")
    void HiddenAll();

    // Writes RGB into custom data slots 1..3 of every instance with this ID.
    // Returns the number of instances recolored.
    UFUNCTION(BlueprintCallable, Category = "POI")
    int32 SetPOIColor(const FString& POI_ID, FLinearColor Color);

    // Bulk recolor from a POI_ID -> color map. Call once at BeginPlay after reading
    // the DataTable. Render state is dirtied once per HISM.
    UFUNCTION(BlueprintCallable, Category = "POI")
    void ApplyColorMap(const TMap<FString, FLinearColor>& Colors);

    // Every baked POI_ID, deduplicated, in bake order. Use to drive UI lists or
    // validate the DataTable against what was actually baked.
    UFUNCTION(BlueprintPure, Category = "POI")
    TArray<FString> GetAllPOIIds() const;

    // Marks one POI selected (slot SelectedDataIndex = 1 + timestamp in
    // SelectTimeDataIndex) and deselects the previous one. Re-selecting the same POI
    // restamps the time so the material pulse plays again. Empty string = deselect all.
    // Returns the number of instances that changed state.
    UFUNCTION(BlueprintCallable, Category = "POI")
    int32 SetSelectedPOI(const FString& POI_ID);

    // Multi line trace Start->End that skips hidden POIs (cubes Overlap, so the ray
    // passes through them) and returns the POI_ID of the nearest VISIBLE one.
    UFUNCTION(BlueprintCallable, Category = "POI")
    bool TraceForPOI(const FVector& Start, const FVector& End, FString& OutPOI_ID) const;

    // Maps an existing hit (component + instance index) to a POI_ID. False if the hit
    // is not on this manager's HISMs or the instance is hidden.
    // Prefer TraceForPOI/SelectPOIByTrace for clicks.
    UFUNCTION(BlueprintCallable, Category = "POI")
    bool ResolveClick(UPrimitiveComponent* HitComp, int32 InstanceIndex, FString& OutPOI_ID) const;

    // Looks up camera data for a POI by ID. Returns false if the ID is not found.
    UFUNCTION(BlueprintCallable, Category = "POI")
    bool GetPOICameraData(const FString& POI_ID, float& OutYaw, float& OutPitch, float& OutArmLength) const;

    // THE click entry point when multiple managers exist: one trace, scans ALL
    // managers in the world, selects the nearest visible POI and deselects everywhere
    // else (only one POI highlighted at a time). Returns the hit manager (null =
    // missed click) and its POI_ID + camera data in OutCameraSpecs. Blueprint only needs
    // this single node.
    UFUNCTION(BlueprintCallable, Category = "POI", meta = (WorldContext = "WorldContextObject"))
    static APOIManager* SelectPOIByTrace(const UObject* WorldContextObject, const FVector& Start, const FVector& End, FString& OutPOI_ID, FPOIHitResult& OutCameraSpecs);

    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    // ---- Serialized state (saved with the map) ----

    UPROPERTY()
    TObjectPtr<USceneComponent> SceneRoot;

    // Read-only view of the baked data for debugging. Never hand-edit -- the HISMs
    // are rebuilt from this array and would go out of sync.
    UPROPERTY(VisibleAnywhere, Category = "POI|Debug")
    TArray<FPOIBakeEntry> BakedEntries;

    // Mesh for the shared click-cube HISM (taken from the first baked POI when unset).
    UPROPERTY(EditAnywhere, Category = "POI")
    TObjectPtr<UStaticMesh> CubeMesh;

    // Materials captured from the source display components at bake time, per mesh kind.
    UPROPERTY()
    TMap<TObjectPtr<UStaticMesh>, FPlaneMaterialSet> PlaneMaterialsByMesh;

    UPROPERTY(EditAnywhere, Category = "POI")
    EPOIBakeScope BakeScope = EPOIBakeScope::PlaneAndHouse;

    // Source actor classes. Soft refs: editor dropdown + they follow redirectors if
    // the asset is moved/renamed.
    UPROPERTY(EditAnywhere, Category = "POI")
    TSoftClassPtr<AActor> POIClassRef = TSoftClassPtr<AActor>(FSoftObjectPath(TEXT("/REX_Interaction/Cores/POI/BP_POI_Room.BP_POI_Room_C")));

    UPROPERTY(EditAnywhere, Category = "POI")
    TSoftClassPtr<AActor> POIHouseClassRef = TSoftClassPtr<AActor>(FSoftObjectPath(TEXT("/REX_Interaction/Cores/POI/BP_POI_House.BP_POI_House_C")));

    // Trace channel for POI clicks. Cubes respond Overlap (NOT Block) so a multi
    // trace passes through hidden POIs to visible ones behind them. Default is the
    // dedicated "POITrace" channel (ECC_GameTraceChannel1, declared in
    // DefaultEngine.ini with DefaultResponse=Ignore so walls/floors never block the
    // ray). Do NOT use ECC_Visibility -- environment geometry blocks that channel.
    UPROPERTY(EditAnywhere, Category = "POI")
    TEnumAsByte<ECollisionChannel> POITraceChannel = ECC_GameTraceChannel1;

    // Custom data floats per instance. Slot layout (the material must read these):
    //   0      Visible (1/0) -> Opacity Mask         (the only hide mechanism)
    //   1..3   RGB color (default white)
    //   4      Selected (1/0) -> brighter emissive
    //   5      SelectTime (world seconds at selection; material runs a decaying
    //          envelope on Time - slot5 for a one-shot pulse)
    UPROPERTY(EditAnywhere, Category = "POI")
    int32 NumCustomDataFloats = 6;

    UPROPERTY(EditAnywhere, Category = "POI")
    int32 SelectedDataIndex = 4;

    UPROPERTY(EditAnywhere, Category = "POI")
    int32 SelectTimeDataIndex = 5;

    // ---- Test spawning (shared by the Room/House "Spawn Test POIs" buttons; test-only) ----

    UPROPERTY(EditAnywhere, Category = "POI|Test")
    int32 TestSpawnCount = 1000;

    // POIs per row (X axis).
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    int32 TestGridColumns = 20;

    // Rows per floor (Y axis).
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    int32 TestGridRows = 5;

    // Spacing in cm: X = column, Y = row, Z = floor height.
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    FVector TestGridSpacing = FVector(200.f, 200.f, 300.f);

    // Shared spawner for the subclass test buttons: spawns TestSpawnCount actors of
    // SourceClassRef in the building grid, assigns sequential POI_1..POI_N, and a random
    // mesh from MeshPool (falling back to DefaultMeshPaths) onto the component named
    // MeshComponentName. Clears the BP's material overrides so the swapped mesh shows its
    // own material instead of a BasicShapeMaterial override.
    void SpawnTestPOIsInternal(const TSoftClassPtr<AActor>& SourceClassRef, const TCHAR* MeshComponentName,
        const TArray<TObjectPtr<UStaticMesh>>& MeshPool, const TArray<const TCHAR*>& DefaultMeshPaths);

    // ---- Transient: rebuilt from BakedEntries on every load ----

    UPROPERTY(Transient)
    TObjectPtr<UCustomHISMC> CubeHISM;

    // Parallel arrays: PlaneHISMs[i] renders instances of PlaneMeshKeys[i].
    UPROPERTY(Transient)
    TArray<TObjectPtr<UCustomHISMC>> PlaneHISMs;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMesh>> PlaneMeshKeys;

    // One entry per cube instance, same order as CubeHISM's instances.
    UPROPERTY(Transient)
    TArray<FPOIRuntimeInstance> POIInstances;

    // Currently selected POI_ID (empty = none). Transient: fresh instances default
    // to Selected = 0, so the selection resets with the HISMs.
    UPROPERTY(Transient)
    FString SelectedPOI_ID;

private:
    // Destroys all attached HISMs and rebuilds everything from BakedEntries (idempotent).
    void RebuildHISMs();

    // Creates and registers one Transient HISM.
    //   bClickCollision: QueryOnly + Overlap on POITraceChannel (click volume).
    //   bVisibleDisplay: rendered or not.
    // Room cube: (true, false). Room plane: (false, true). Unified house: (true, true).
    UCustomHISMC* CreateHISM(UStaticMesh* Mesh, bool bClickCollision, bool bVisibleDisplay);

    // Returns the PlaneHISMs index of the HISM for this mesh, creating it if needed.
    // bWithClickCollision = true in unified house mode (display HISM doubles as click volume).
    int32 GetOrCreatePlaneHISM(UStaticMesh* Mesh, bool bWithClickCollision);

    // Maps a hit (component + instance index) to an index in POIInstances, or INDEX_NONE.
    int32 ResolvePOIIndex(const UPrimitiveComponent* Comp, int32 InstanceIndex) const;

    // Writes slot 0 of every instance from ShouldShow(POI_ID), dirtying each HISM once.
    void ApplyVisibility(TFunctionRef<bool(const FString&)> ShouldShow);

    // Writes RGB into slots 1..3 of one instance and collects the touched HISM so the
    // caller can dirty it once. False if the instance has no display mesh.
    bool WriteInstanceColor(const FPOIRuntimeInstance& Inst, const FLinearColor& Color, TSet<UCustomHISMC*>& DirtyHISMs);
};

// Manager for plane-style POIs (rooms). BakeScope locked to PlaneOnly in the constructor.
UCLASS(meta = (DisplayName = "POI Manager - Room"))
class REX_INTERACTION_API APOIManagerRoom : public APOIManager
{
    GENERATED_BODY()

public:
    APOIManagerRoom();

    // Spawns TestSpawnCount source POI actors in a building-shaped grid with sequential
    // IDs and random plane meshes -- for bake/HISM load testing only.
    UFUNCTION(CallInEditor, Category = "POI|Test")
    void SpawnTestPOIs();

protected:
    // Meshes assigned randomly to spawned POIs' Plane component. Empty -> engine BasicShapes planes.
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    TArray<TObjectPtr<UStaticMesh>> TestPlaneMeshes;
};

// Manager for house-style POIs (a translucent cube is both display and click volume).
// BakeScope locked to HouseOnly; RebuildHISMs merges display + click into ONE HISM
// per mesh kind (no separate cube HISM -- half the instances).
UCLASS(meta = (DisplayName = "POI Manager - House"))
class REX_INTERACTION_API APOIManagerHouse : public APOIManager
{
    GENERATED_BODY()

public:
    APOIManagerHouse();

    // Spawns TestSpawnCount source house POI actors in a building-shaped grid with
    // sequential IDs and random cube meshes -- for bake/HISM load testing only.
    UFUNCTION(CallInEditor, Category = "POI|Test")
    void SpawnTestPOIs();

protected:
    // Meshes assigned randomly to spawned POIs' Cube component. Empty -> engine BasicShapes cube.
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    TArray<TObjectPtr<UStaticMesh>> TestCubeMeshes;
};
