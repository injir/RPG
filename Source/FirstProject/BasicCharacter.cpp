// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstProject.h"
#include "BasicCharacter.h"



// Sets default values
ABasicCharacter::ABasicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	calculateStartStats();
	calculateHealth();
	CalculateDamage();

}

// Called when the game starts or when spawned
void ABasicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ABasicCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}
/*
--------------Сеттеры----------------
*/
void ABasicCharacter::SetHealth(int32 health) {
	Health = health;
}
void ABasicCharacter::SetStrength(int32 strength) {
	Strength = strength;
}
void ABasicCharacter::SetAgility(int32 agility) {
	Agility = agility;
}
void ABasicCharacter::SetIntelligence(int32 intelligence) {
	Intelligence = intelligence;
}
void ABasicCharacter::SetMooveSpeed(int32 mooveSpeed) {
	MooveSpeed = mooveSpeed;
}
void ABasicCharacter::SetDamage(int32 damage) {
	Damage = damage;
}
//---------------------------------------
/*
 --------------Геттеры----------------
*/
int32 ABasicCharacter::GetHealth() {
	return Health;
}
int32 ABasicCharacter::GetStrength() {
	return int32(Strength);
}
int32 ABasicCharacter::GetAgility() {
	return int32(Agility);
}

int32 ABasicCharacter::GetIntelligence() {
	return int32(Intelligence);
}
int32 ABasicCharacter::GettDamage() {
	return int32(Damage);
}
int32 ABasicCharacter::GetMooveSpeed() {
	return int32(MooveSpeed);
}
int32 ABasicCharacter::GetDamage() {
	return int32(Damage);
}
//---------------------------------------

void ABasicCharacter::ImproveStrength(int32 strength) {
	if (strength == 0) {
		strength = 1;
	}
	Strength = Strength + unsigned int(strength);
	RecalculateStats();
}

void ABasicCharacter::ImproveAgility(int32 agility) {
	if (agility == 0) {
		agility = 1;
	}
	Agility = Agility + unsigned int(agility);
	RecalculateStats();
}
void ABasicCharacter::ImproveIntelligence(int32 intelligence) {
	if (intelligence == 0) {
		intelligence = 1;
	}
	Intelligence = Intelligence + unsigned int(intelligence);
	RecalculateStats();
}

// Подсчет здоровья существа
void ABasicCharacter::calculateHealth() {
	int32 health = int32((Strength * 13) + 100);
	SetHealth(health);
}

// Установка начальных характеристик 
void ABasicCharacter::calculateStartStats() {
	int32 stats = int32(Stats);
	int32 randomStrength = int32((rand() % stats) + 1);
	stats = stats - randomStrength;
	int32 randomAgility = int32((rand() % stats) + 1);
	int32 randomIntelegence = int32(stats-randomAgility);
	SetStrength(randomStrength);
	SetAgility(randomAgility);
	SetIntelligence(randomIntelegence);
}
void ABasicCharacter::CalculateDamage() {
	Damage = (Strength * ABasicCharacter::MULTIPLE_STRENGTH) + (Agility * ABasicCharacter::MULTIPLE_AGILITY) + (Intelligence * ABasicCharacter::MULTIPLE_INTELLIGENCE);
}
void ABasicCharacter::RecalculateStats() {
	calculateHealth();
	CalculateDamage();
}