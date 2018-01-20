#include "treasure.hpp"

Treasure::Treasure(int newVal, int tType, string newName, int kind):Card(string newName, int kind){
	this->value = newVal;
	this->treasType = tType;
}

int Treasure::getValue(){
	return this->value;
}