#include "door.hpp"

Door::Door(DoorDeck newDoor, string newName, int kind):Card(string newName, int kind){
	this->doorType = newDoor;
}

int Door::getDoorType(){
	return this->doorType;
}