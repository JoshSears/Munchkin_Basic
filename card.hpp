#ifndef CARD

#define CARD
#include <string>

enum CardDeck {door, treasure};

class Card{
	
private:

	string name;
	CardDeck deck;

public:

	Card();
	Card(string, int);
	int getName();
	int getType();

}

#endif