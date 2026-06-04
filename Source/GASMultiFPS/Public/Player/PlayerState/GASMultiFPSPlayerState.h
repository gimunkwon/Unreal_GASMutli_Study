#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "GASMultiFPSPlayerState.generated.h"

class UGASMultiFPSAbilitySystemComponent;

UCLASS()
class GASMULTIFPS_API AGASMultiFPSPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AGASMultiFPSPlayerState();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
#pragma region ASCGetter
	UGASMultiFPSAbilitySystemComponent* GetGASMultiFPSASC() const {return AbilitySystemComponent;}
#pragma endregion 
	
private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UGASMultiFPSAbilitySystemComponent> AbilitySystemComponent;
};
