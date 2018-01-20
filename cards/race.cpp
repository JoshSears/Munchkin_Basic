#include "race.hpp"

Race::Race(int newRunMod, int newBonus, string newName):Door(string newName){
	this->runMod = newRunMod;
	this->bonus = newBonus;
	this->doorType = "race";
}

int Door::getDoorType(){
	return this->doorType;
}