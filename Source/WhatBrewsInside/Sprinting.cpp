// Fill out your copyright notice in the Description page of Project Settings.


#include "Sprinting.h"

void USprinting::PhysCustom(float deltaTime, int32 Iterations)
{
    if (CustomMovementMode == (uint8)ECustomMovementMode::MOVE_CustomMode1)
    {
        // Implement custom movement logic for CustomMode1
        // Example: Move character upward at a fixed speed
        FVector NewVelocity = FVector(0.0f, 0.0f, 600.0f);
        Velocity = NewVelocity;

        // Apply movement
        FVector Delta = Velocity * deltaTime;
        FHitResult Hit;
        SafeMoveUpdatedComponent(Delta, UpdatedComponent->GetComponentQuat(), true, Hit);
    }
    else if (CustomMovementMode == (uint8)ECustomMovementMode::MOVE_CustomMode2)
    {
        // Implement another custom movement mode logic
    }
    else
    {
        Super::PhysCustom(deltaTime, Iterations); // Fallback to default behavior
    }
}

void USprinting::SetCustomMovementMode(ECustomMovementMode NewMode)
{
    SetMovementMode(MOVE_Custom, (uint8)NewMode);
}