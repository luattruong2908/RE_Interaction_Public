#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "CustomISMC.generated.h"

// ISM with a bounds-checked READ of per-instance custom data (the engine only
// exposes the write path). Keep logic identical to UCustomHISMC.
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class REX_INTERACTION_API UCustomISMC : public UInstancedStaticMeshComponent
{
    GENERATED_BODY()

public:
    // Returns the instance's custom data float, or 0 if any index is out of range.
    UFUNCTION(BlueprintPure, Category = "Custom ISM")
    float GetInstanceCustomDataValue(int32 InstanceIndex, int32 DataIndex) const;
};
