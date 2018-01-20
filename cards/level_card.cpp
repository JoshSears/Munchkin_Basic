#include "level_card.hpp"

LevelCard::LevelCard(int newVal, "level", string newName, int kind, int levelChange):Treasure(int, newVal, string newName, int kind){
	this->value = newVal;
}

int LevelCard::getLevelEffect(){
	if (this->name == "this" || this->name == "that"){
		std::cout << "Special Level Card" << std::endl;
	} else {
		std::cout << "Normal Level Card" << std::endl;
	}
}