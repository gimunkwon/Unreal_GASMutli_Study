#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GASMultiFPSCharacter.generated.h"

UCLASS()
class GASMULTIFPS_API AGASMultiFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AGASMultiFPSCharacter();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
