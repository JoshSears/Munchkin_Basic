#ifndef CARD

#define CARD
#include <string>
#include <iostream>

enum CardDeck {"door", "treasure"};

class Card{
	
private:

	string name;
	CardDeck deck;

public:

	Card(string);
	int getName();
	int getDeckType();

}

#endif