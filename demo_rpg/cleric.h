#pragma once
#include "character.h"

class Cleric : public Character
{
private:

public:
	static const stattype Cleric_MAXHP = 14u;
	static const stattype Cleric_HPGROWTH = 5u;
	static const stattype Cleric_BASE_STR = 8u;
	static const stattype Cleric_BASE_INT = 10u;
	Cleric()
		: Character(Cleric_MAXHP, Cleric_HPGROWTH, Cleric_BASE_STR, Cleric_BASE_INT)
	{

	}

};