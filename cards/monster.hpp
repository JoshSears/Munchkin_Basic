#ifndef Monster_Door

#define Monster_Door
#include <map>
#include "door.hpp"

class Monster:public Door{
	
private:
	int monsterLevel;
	int treasureCount;
	std::map <string, int> badStuff;
	std::map <string, int> protection;

public:
	Monster(int, int, string):Door(string);
	int getMonsterLevel();
	int getTreasCount();
	void setProtection(string, int);
	void setBadStuff(string, int);
	int getProtection(string);
	int getBadStuff(string);


#endif