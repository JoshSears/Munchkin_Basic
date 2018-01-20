#include "use_card.hpp"

UseCard::UseCard(bool playerUse, bool monsterUse, int newBonus, int newVal, string newName, int kind, int levelChange):Treasure(int newVal, string newName, int kind){
	this->usableOnPlayer = playerUse;
	this->useableOnMonster = monsterUse;
	this->bonusValue = newBonus;
}

int UseCard::getBonusValue(){
	return this->bonusValue;

}

bool UseCard::isUsableOnPlayer(){
	return this->usableOnPlayer;
}

bool UseCard::isUsableOnMonster(){
	return this->usableOnMonster;
}

void UseCard::specialEffect(){
	std::cout << "this is a special one use card." << std::endl;

}