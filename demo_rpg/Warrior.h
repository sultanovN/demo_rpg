#pragma once
#include "character.h"

class Warrior : public Character
{
private:

public:
	static const stattype WARRIOR_MAXHP = 20u;
	static const stattype WARRIOR_HPGROWTH = 8u;
	static const stattype WARRIOR_BASE_STR = 12u;
	static const stattype WARRIOR_BASE_INT = 6u;
	Warrior()
		: Character(WARRIOR_MAXHP, WARRIOR_HPGROWTH, WARRIOR_BASE_STR, WARRIOR_BASE_INT)
	{

	}

};