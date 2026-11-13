#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "POIManager.generated.h"

class UCustomHISMC;
class UStaticMesh;
class UMaterialInterface;
class UPrimitiveComponent;

// One baked POI. BakedEntries is the serialized source of truth; the HISMs are
// Transient and rebuilt from it on every load (see RebuildHISMs).
// Do NOT rename fields without a property redirect in
// Config/DefaultREX_Interaction.ini -- that breaks data already baked into maps.
USTRUCT()
struct FPOIBakeEntry
{
    GENERATED_BODY()

    // Key into the POI DataTable (read from the source actor via reflection).
    UPROPERTY(VisibleAnywhere, Category = "POI")
    FString POI_ID;

    // The source POI's Cube mesh: display and click volume in one.
    // Also the grouping key -- one HISM per distinct mesh.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    TObjectPtr<UStaticMesh> Mesh = nullptr;

    // World transform of the Cube.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    FTransform Transform = FTransform::Identity;

    // Camera spring arm settings captured from the source POI at bake time.
    // The pawn reads these when the player clicks a POI and applies them to its own spring arm.
    UPROPERTY(VisibleAnywhere, Category = "POI")
    float CameraYaw = 0.f;

    UPROPERTY(VisibleAnywhere, Category = "POI")
    float CameraPitch = -45.f;

    UPROPERTY(VisibleAnywhere, Category = "POI")
    float CameraArmLength = 800.f;
};

// Per-slot materials of one mesh kind, captured at bake time. Only true
// overrides are stored; null = inherit the mesh's own material.
USTRUCT()
struct FPOIMaterialSet
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

    // Baked spring arm angle in the POI's local frame (Roll is always 0).
    UPROPERTY(BlueprintReadOnly, Category = "POI")
    FRotator CameraRotation = FRotator(-45.f, 0.f, 0.f);

    UPROPERTY(BlueprintReadOnly, Category = "POI")
    float CameraArmLength = 800.f;

    // World location of the hit POI (zero on a missed trace).
    UPROPERTY(BlueprintReadOnly, Category = "POI")
    FVector POILocation = FVector::ZeroVector;
};

// Runtime data of one POI, same order as BakedEntries.
// Transient -- rebuilt from BakedEntries on load.
USTRUCT()
struct FPOIRuntimeInstance
{
    GENERATED_BODY()

    UPROPERTY()
    FString POI_ID;

    // Index into APOIManager::HISMs (INDEX_NONE if this POI has no mesh).
    UPROPERTY()
    int32 HISMIndex = INDEX_NONE;

    // Instance index inside that HISM.
    UPROPERTY()
    int32 InstanceIndex = INDEX_NONE;

    // Cached show/hide state, used to skip hidden POIs on click.
    UPROPERTY()
    bool bVisible = true;

    // World location (copied from the baked transform at rebuild time).
    UPROPERTY()
    FVector Location = FVector::ZeroVector;

    // Camera spring arm data (copied from BakedEntries at rebuild time).
    UPROPERTY()
    float CameraYaw = 0.f;

    UPROPERTY()
    float CameraPitch = -45.f;

    UPROPERTY()
    float CameraArmLength = 800.f;
};

// Bakes hundreds/thousands of source POI actors (BP_POI_House: one translucent
// Cube that is both display and click volume) into one HISM per distinct mesh.
// All visual state (show/hide, color, selection) is per-instance custom data read
// by the material on the GPU -- no per-frame CPU work, no per-instance SetVisibility.
UCLASS(meta = (DisplayName = "POI Manager"))
class REX_INTERACTION_API APOIManager : public AActor
{
    GENERATED_BODY()

public:
    APOIManager();

#if WITH_EDITOR
    // ---- Editor buttons ----

    // Scans the level for source POI actors, fills BakedEntries, rebuilds the
    // HISMs. Re-running re-bakes from scratch. A scan that finds no source POI keeps
    // the existing bake (the sources are usually deleted after baking).
    UFUNCTION(CallInEditor, Category = "POI")
    void BakeFromLevel();

    // Destroys the source POI actors. Run AFTER baking.
    // Not undoable -- if pressed by mistake, do not save the map.
    UFUNCTION(CallInEditor, Category = "POI")
    void DeleteSourcePOIs();

    // Spawns TestSpawnCount source POI actors in a building-shaped grid with
    // sequential IDs and random cube meshes -- for bake/HISM load testing only.
    UFUNCTION(CallInEditor, Category = "POI|Test")
    void SpawnTestPOIs();
#endif

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

    // Multi line trace Start->End that skips hidden POIs (instances Overlap, so the
    // ray passes through them) and returns the POI_ID of the nearest VISIBLE one.
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
    // else (only one POI highlighted at a time). A click that hits nothing clears only
    // the managers with bDeselectOnMissedClick set. Returns the hit manager (null =
    // missed click) and its POI_ID + camera data in OutCameraSpecs. Blueprint only needs
    // this single node.
    UFUNCTION(BlueprintCallable, Category = "POI", meta = (WorldContext = "WorldContextObject"))
    static APOIManager* SelectPOIByTrace(const UObject* WorldContextObject, const FVector& Start, const FVector& End, FString& OutPOI_ID, FPOIHitResult& OutCameraSpecs);

    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    // Self-heal for game worlds: PIE duplicates the editor world without re-running
    // OnConstruction, so the Transient state (HISMs/POIInstances) can arrive empty.
    // Rebuilds from BakedEntries before any BP BeginPlay logic (color/click) runs.
    virtual void BeginPlay() override;

    // ---- Serialized state (saved with the map) ----

    UPROPERTY()
    TObjectPtr<USceneComponent> SceneRoot;

    // Read-only view of the baked data for debugging. Never hand-edit -- the HISMs
    // are rebuilt from this array and would go out of sync.
    UPROPERTY(VisibleAnywhere, Category = "POI|Debug")
    TArray<FPOIBakeEntry> BakedEntries;

    // Materials captured from the source Cube components at bake time, per mesh kind.
    UPROPERTY()
    TMap<TObjectPtr<UStaticMesh>, FPOIMaterialSet> MaterialsByMesh;

    // Trace channel for POI clicks. Instances respond Overlap (NOT Block) so a multi
    // trace passes through hidden POIs to visible ones behind them. Default is the
    // dedicated "POITrace" channel (ECC_GameTraceChannel1, declared in
    // DefaultEngine.ini with DefaultResponse=Ignore so walls/floors never block the
    // ray). Do NOT use ECC_Visibility -- environment geometry blocks that channel.
    UPROPERTY(EditAnywhere, Category = "POI")
    TEnumAsByte<ECollisionChannel> POITraceChannel = ECC_GameTraceChannel1;

    // Should a click that hits no POI clear this manager's selection? Off by default:
    // clicking empty space keeps the current POI highlighted, only clicking ANOTHER
    // POI moves the selection. Checked per manager, so each can decide on its own.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    bool bDeselectOnMissedClick = false;

    // Custom data floats per instance. Slot layout (the material must read these):
    //   0      Visible (1/0) -> Opacity Mask         (the only hide mechanism)
    //   1..3   RGB color (default white)
    //   4      Selected (1/0) -> brighter emissive
    //   5      SelectTime (world seconds at selection; material runs a decaying
    //          envelope on Time - slot5 for a one-shot pulse)
    // Minimum 4: slots 0..3 are always written.
    UPROPERTY(EditAnywhere, Category = "POI", meta = (ClampMin = "4", ClampMax = "32"))
    int32 NumCustomDataFloats = 6;

    UPROPERTY(EditAnywhere, Category = "POI", meta = (ClampMin = "0", ClampMax = "31"))
    int32 SelectedDataIndex = 4;

    // -1 = no timestamp slot (selection still works, the pulse does not).
    UPROPERTY(EditAnywhere, Category = "POI", meta = (ClampMin = "-1", ClampMax = "31"))
    int32 SelectTimeDataIndex = 5;

#if WITH_EDITORONLY_DATA
    // Source actor class for the editor buttons. Soft ref: editor dropdown + it
    // follows redirectors if the asset is moved/renamed.
    UPROPERTY(EditAnywhere, Category = "POI")
    TSoftClassPtr<AActor> POIClassRef = TSoftClassPtr<AActor>(FSoftObjectPath(TEXT("/REX_Interaction/Cores/POI/BP_POI_House.BP_POI_House_C")));

    // ---- Test spawning (the "Spawn Test POIs" button; test-only) ----

    UPROPERTY(EditAnywhere, Category = "POI|Test", meta = (ClampMin = "1", ClampMax = "20000"))
    int32 TestSpawnCount = 1000;

    // POIs per row (X axis).
    UPROPERTY(EditAnywhere, Category = "POI|Test", meta = (ClampMin = "1"))
    int32 TestGridColumns = 20;

    // Rows per floor (Y axis).
    UPROPERTY(EditAnywhere, Category = "POI|Test", meta = (ClampMin = "1"))
    int32 TestGridRows = 5;

    // Spacing in cm: X = column, Y = row, Z = floor height.
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    FVector TestGridSpacing = FVector(200.f, 200.f, 300.f);

    // Meshes assigned randomly to spawned POIs' Cube component. Empty -> engine BasicShapes cube.
    UPROPERTY(EditAnywhere, Category = "POI|Test")
    TArray<TObjectPtr<UStaticMesh>> TestCubeMeshes;
#endif

    // ---- Transient: rebuilt from BakedEntries on every load ----

    // Parallel arrays: HISMs[i] renders instances of MeshKeys[i].
    UPROPERTY(Transient)
    TArray<TObjectPtr<UCustomHISMC>> HISMs;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMesh>> MeshKeys;

    // One entry per baked POI, same order as BakedEntries.
    UPROPERTY(Transient)
    TArray<FPOIRuntimeInstance> POIInstances;

    // Currently selected POI_ID (empty = none). Transient: fresh instances default
    // to Selected = 0, so the selection resets with the HISMs.
    UPROPERTY(Transient)
    FString SelectedPOI_ID;

private:
    // Lookup tables, filled by RebuildHISMs. Not reflected, so they never survive a
    // world duplication (PIE) -- bLookupsBuilt then reads false and BeginPlay rebuilds.

    // Click lookup: InstanceToPOI[HISM index][instance index] = index into POIInstances.
    TArray<TArray<int32>> InstanceToPOI;

    // POI_ID -> indices into POIInstances (an ID may be shared by several POIs).
    TMap<FString, TArray<int32>> IdToPOIs;

    bool bLookupsBuilt = false;

    // Destroys the HISMs this manager created and rebuilds everything from
    // BakedEntries (idempotent).
    void RebuildHISMs();

    // Creates and registers one Transient HISM: rendered, QueryOnly + Overlap on
    // POITraceChannel (display and click volume in one).
    UCustomHISMC* CreateHISM(UStaticMesh* Mesh);

    // Returns the HISMs index of the HISM for this mesh, creating it if needed.
    int32 GetOrCreateHISM(UStaticMesh* Mesh);

    // The live HISM holding this POI's instance, or null (no mesh / HISM destroyed).
    UCustomHISMC* GetInstanceHISM(const FPOIRuntimeInstance& Inst) const;

    // MarkRenderStateDirty on every live HISM -- call once after a batch of writes.
    void MarkAllHISMsDirty();

    // Maps a hit (component + instance index) to an index in POIInstances, or INDEX_NONE.
    int32 ResolvePOIIndex(const UPrimitiveComponent* Comp, int32 InstanceIndex) const;

    // Writes slot 0 of every instance from ShouldShow(POI_ID), dirtying each HISM once.
    void ApplyVisibility(TFunctionRef<bool(const FString&)> ShouldShow);

    // Writes RGB into slots 1..3 of one instance and collects the touched HISM so the
    // caller can dirty it once. False if the instance has no live HISM.
    bool WriteInstanceColor(const FPOIRuntimeInstance& Inst, const FLinearColor& Color, TSet<UCustomHISMC*>& DirtyHISMs);
};
