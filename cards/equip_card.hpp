#ifndef equip_card

#define equip_card

class EquipCard:public Treasure{

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