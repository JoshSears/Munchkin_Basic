#include "card.hpp"

Card::Card(){
	this->name = "";
	this->cardType = -1;
}

Card::Card(string newName, int kind){
	this->name = newName;
	this->cardType = kind;
}

int Card::getName(){
	return this->name;
}

int Card::getType(){
	return this->cardType;
}