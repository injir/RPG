// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstProject.h"
#include "Hero.h"


AHero::AHero() {
	
}
void AHero::setGold(int32 gold) {
	Gold = gold;
}
void AHero::setExperience(int32 exp) {
	Experience = exp;
}
void AHero::setFait(int32 fait) {
	Fait = fait;
}
int32 AHero::getGold() {
	return Gold;
}
int32 AHero::getExperience() {
	return Experience;

}
int32 AHero::getFait() {
	return Fait;
}
void AHero::showBuffs() {

}


