#pragma once
#include "character.h"

class Mage : public Character
{
private:

public:
	static const stattype Mage_MAXHP = 10u;
	static const stattype Mage_HPGROWTH = 3u;
	static const stattype Mage_BASE_STR = 6u;
	static const stattype Mage_BASE_INT = 12u;
	Mage()
		: Character(Mage_MAXHP, Mage_HPGROWTH, Mage_BASE_STR, Mage_BASE_INT)
	{

	}

};