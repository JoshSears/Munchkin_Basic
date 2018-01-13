#ifndef treasure_card

#define treasure

class Treasure:public Card{

	private:
		int value;

	public:
		Treasure();
		Treasure(int);
		int getValue();
	
}

#endif