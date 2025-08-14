// Copyright YvanWhite

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "AuraCharacter.generated.h"


/**
 * 
 */
UCLASS()
class ARCANEMASTERDUNGEON_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> Camera;

private:
	void InitAbilityActorInfo();
	
};
