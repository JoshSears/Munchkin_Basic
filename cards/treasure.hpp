#ifndef treasure_card

#define treasure_card

enum TreasureType {levelUp, oneUse, equip};

class Treasure:public Card{

	private:
		int value;
		TreasureType treasType;

	public:
		Treasure(int, int, string, int):Card(string, int);
		int getValue();
	
}

#endif