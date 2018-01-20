#include "door.hpp"

Door::Door(string newName):Card(string newName){
	this->deck = "door";
}

int Door::getDoorType(){
	return this->doorType;
}