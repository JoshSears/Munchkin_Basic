#ifndef Race_Card

#define Race_Card

#include "door.hpp"


class Race:public Door{
	
private:
	int runMod;
	int bonus;
	

public:
	Race(int, int, string):Door(string);
	int getRunMod();
	int getBonus();

}

#endif