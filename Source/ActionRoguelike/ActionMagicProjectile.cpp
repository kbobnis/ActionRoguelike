// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionMagicProjectile.h"

#include "Particles/ParticleSystemComponent.h"

// Sets default values
AActionMagicProjectile::AActionMagicProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComp->SetCollisionProfileName("Projectile");
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	MovementComponent->InitialSpeed = 1000.0f;
	MovementComponent->bRotationFollowsVelocity = true;
	MovementComponent->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void AActionMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AActionMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
