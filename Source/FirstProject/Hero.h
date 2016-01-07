// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BasicCharacter.h"

#include "Hero.generated.h"


/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API AHero : public ABasicCharacter
{
	GENERATED_BODY()
public:
		AHero();
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
		void setGold(int32 gold);
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
		void setExperience(int32 exp);
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
		void setFait(int32 fait);
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
		int32 getGold();
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
		int32 getExperience();
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
		int32 getFait();
		UFUNCTION(BlueprintCallable, Category = "HeroFunction")
			void showBuffs();
protected:
		
		int32 Experience;
		int Gold;
		int Fait;

	
	
};
