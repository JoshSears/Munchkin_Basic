#include "card.hpp"

Card::Card(string newName){
	this->name = newName;
}

int Card::getName(){
	return this->name;
}

int Card::getDeckType(){
	return this->cardType;
}