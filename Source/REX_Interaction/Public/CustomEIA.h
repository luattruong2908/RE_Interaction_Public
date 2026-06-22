#pragma once

#include "CoreMinimal.h"
#include "EnhancedPlayerInput.h"
#include "CustomEIA.generated.h"

// Fixes UE's long-standing touch input bug: when a finger is released, the touch
// key's value/accumulator can survive into later frames ("sticking" input).
// Nothing to call -- works only when wired as the project input class in
// Config/DefaultInput.ini (DefaultPlayerInputClass + DefaultEditorInputClass).
UCLASS()
class REX_INTERACTION_API UCustomEIA : public UEnhancedPlayerInput
{
    GENERATED_BODY()

protected:
    virtual void EvaluateKeyMapState(const float DeltaTime, const bool bGamePaused, OUT TArray<TPair<FKey, FKeyState*>>& KeysWithEvents) override;
};
