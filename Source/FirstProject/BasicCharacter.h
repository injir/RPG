// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BasicCharacter.generated.h"

UCLASS()
class FIRSTPROJECT_API ABasicCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	// Общие свойства всех существ
	int Stats = 30;
	
	ABasicCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	/*
	--------------Сеттеры----------------
	*/
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void SetHealth(int32 health);

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void SetStrength(int32 strength);

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void SetAgility(int32 agility);

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void SetIntelligence(int32 intelligence);

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void SetDamage(int32 damage);

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void SetMooveSpeed(int32 mooveSpeed);
	//---------------------------------------
	
	/*
	--------------Геттеры----------------
	*/

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GetHealth();

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GetStrength();

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GetAgility();

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GetIntelligence();

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GettDamage();

	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GetMooveSpeed();


	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		int32 GetDamage();
	//---------------------------------------
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void ImproveStrength(int32 strength);
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void ImproveAgility(int32 agility);
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	void ImproveIntelligence(int32 intelligence);


	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	virtual	void calculateHealth();
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	virtual	void calculateStartStats();
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
	virtual	void CalculateDamage();
	UFUNCTION(BlueprintCallable, Category = "BasicCharacter")
		void RecalculateStats();


protected:
	const int  MULTIPLE_STRENGTH = 3;
	const int  MULTIPLE_AGILITY = 2;
	const int  MULTIPLE_INTELLIGENCE = 1;
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int32 Health = 0;

		
		unsigned int Strength = 0;

	
		unsigned int Agility = 0;


		unsigned int Intelligence = 0;


		unsigned int Damage = 0;


		unsigned int MooveSpeed = 0;


	

};
