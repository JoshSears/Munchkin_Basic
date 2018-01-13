#ifndef DOOR_Card

#define DOOR_Card
#include <string>

enum DoorDeck {"race", "class", "monster"};

class Door{
	
private:
	DoorDeck doorType;

public:
	Door(DoorDeck):Card(string, int);
	int getDoorType();

}

#endif