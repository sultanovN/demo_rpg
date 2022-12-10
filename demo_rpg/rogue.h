#pragma once
#include "character.h"

class Rogue : public Character
{
private:

public:
	static const stattype Rogue_MAXHP = 17u;
	static const stattype Rogue_HPGROWTH = 6u;
	static const stattype Rogue_BASE_STR = 10u;
	static const stattype Rogue_BASE_INT = 8u;
	Rogue()
		: Character(Rogue_MAXHP, Rogue_HPGROWTH, Rogue_BASE_STR, Rogue_BASE_INT)
	{

	}

};