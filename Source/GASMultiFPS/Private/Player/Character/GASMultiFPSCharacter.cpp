#include "GASMultiFPS/Public/Player/Character/GASMultiFPSCharacter.h"

#include "AbilitySystemComponent.h"
#include "GASMultiFPS/Public/Player/PlayerState/GASMultiFPSPlayerState.h"


AGASMultiFPSCharacter::AGASMultiFPSCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGASMultiFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
}

UAbilitySystemComponent* AGASMultiFPSCharacter::GetAbilitySystemComponent() const
{
	const AGASMultiFPSPlayerState* PS = GetPlayerState<AGASMultiFPSPlayerState>();
	
	return PS ? PS->GetAbilitySystemComponent() : nullptr;
}

void AGASMultiFPSCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	InitAbilitySystem();
}

void AGASMultiFPSCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	InitAbilitySystem();
}

void AGASMultiFPSCharacter::InitAbilitySystem()
{
	AGASMultiFPSPlayerState* PS = GetPlayerState<AGASMultiFPSPlayerState>();
	if (!PS) return;
	
	PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS,this);
}