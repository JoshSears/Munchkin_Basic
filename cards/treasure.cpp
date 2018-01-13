#include "treasure.hpp"

Treasure::Treasure(){
	this->value = 0;
}

Treasure::Treasure(int newVal){
	this->value = newVal;
}

int Treasure::getValue(){
	return this->value;
}