#ifndef level_card

#define level_card

class LevelCard:public Treasure{

	private:
		int levelEffect;

	public:
		LevelCard(int, int, int, string, int, int):Treasure(int, string, int, int);
		int getLevelEffect();
	
}

#endif