// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Sprinting.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ECustomMovementMode : uint8
{
    MOVE_None UMETA(DisplayName = "None"),
    MOVE_CustomMode1 UMETA(DisplayName = "Custom Mode 1"),
    MOVE_CustomMode2 UMETA(DisplayName = "Custom Mode 2"),
    MOVE_Max UMETA(Hidden),
};


UCLASS()
class WHATBREWSINSIDE_API USprinting : public UCharacterMovementComponent
{
	GENERATED_BODY()
	

public:
    // Override to support custom movement
    virtual void PhysCustom(float deltaTime, int32 Iterations) override;

    // Set a custom movement mode
    void SetCustomMovementMode(ECustomMovementMode NewMode);

};
