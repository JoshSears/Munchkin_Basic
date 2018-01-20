	#include "monster.hpp"

	Monster::Monster(int setLevel, int setTreas, string name):Door(string name){
		this->doorType = "monster";
		this->monsterLevel = setLevel;
		this->treasureCount = setTreas;

	}
	
	int Monster::getMonsterLevel(){
		return this->monsterLevel;
	}

	int Monster::getTreasCount(){
		return this->treasureCount;
	}

	void Monster::setProtection(string, int){
		//find string in map
		//set value
	}

	void Monster::setBadStuff(string, int){
		//find string in map
		//set value
	}

	int Monster::getProtection(string){
		//find string in map
		//set value
		return 0;
	}

	int Monster::getBadStuff(string){
		//find string in map
		//set value
		return 0;
	}