#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GASMultiFPSCharacter.generated.h"

UCLASS()
class GASMULTIFPS_API AGASMultiFPSCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGASMultiFPSCharacter();
	
#pragma region ASCGetter
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
#pragma endregion 
	
protected:
	virtual void BeginPlay() override;
	// Server
	virtual void PossessedBy(AController* NewController) override;
	// Client
	virtual void OnRep_PlayerState() override;
private:
	void InitAbilitySystem();
};
