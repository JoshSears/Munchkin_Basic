#ifndef use_card

#define use_card

class UseCard:public Treasure{

	private:
		bool usableOnPlayer;
		bool useableOnMonster;
		int bonusValue;


	public:
		UseCard(bool, bool, int, int, string, int, int):Treasure(int, string, int, int);
		int getBonusValue();
		bool isUsableOnPlayer();
		bool isUsableOnMonster();
		void specialEffect();
}

#endif