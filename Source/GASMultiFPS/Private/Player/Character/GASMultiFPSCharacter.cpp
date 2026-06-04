#include "GASMultiFPS/Public/Player/Character/GASMultiFPSCharacter.h"



AGASMultiFPSCharacter::AGASMultiFPSCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AGASMultiFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void AGASMultiFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AGASMultiFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

