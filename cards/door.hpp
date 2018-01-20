#ifndef Door_Card

#define Door_Card
#include <string>
#include "card.hpp"

enum DoorDeck {"race", "class", "monster"};
enum PlayerClass {"none", "warrior", "wizard", "thief"};
enum PlayerRace {"human", "elf", "dwarf"};

class Door:public Card{
	
private:
	DoorDeck doorType;

public:
	Door(string):Card(string);
	int getDoorType();

}

#endif