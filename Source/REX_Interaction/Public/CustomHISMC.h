#pragma once

#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "CustomHISMC.generated.h"

// HISM with a bounds-checked READ of per-instance custom data (the engine only
// exposes the write path). Backbone of the POI system. Keep logic identical to UCustomISMC.
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class REX_INTERACTION_API UCustomHISMC : public UHierarchicalInstancedStaticMeshComponent
{
    GENERATED_BODY()

public:
    // Returns the instance's custom data float, or 0 if any index is out of range.
    UFUNCTION(BlueprintPure, Category = "Custom HISM")
    float GetInstanceCustomDataValue(int32 InstanceIndex, int32 DataIndex) const;
};
