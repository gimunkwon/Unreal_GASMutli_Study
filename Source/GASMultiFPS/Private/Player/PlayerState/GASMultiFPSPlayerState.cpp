#include "GASMultiFPS/Public/Player/PlayerState/GASMultiFPSPlayerState.h"

#include "GASMultiFPS/Public/AbilitySysComp/GASMultiFPSAbilitySystemComponent.h"


AGASMultiFPSPlayerState::AGASMultiFPSPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UGASMultiFPSAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

UAbilitySystemComponent* AGASMultiFPSPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
