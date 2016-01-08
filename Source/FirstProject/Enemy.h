// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BasicCharacter.h"

#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API AEnemy : public ABasicCharacter
{
	GENERATED_BODY()
protected:
	//Buff AttackModifier;
	int16 AttackMultiply;
	// vector<Item> drop;
	// vector<Buff> bufs;
	//vector<Buff> Buffs;
	int32 Experience;
	int32 QuestId;

	
	
	
	
};
