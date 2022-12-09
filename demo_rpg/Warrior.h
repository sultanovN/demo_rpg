#pragma once
#include "character.h"

class Warrior : public Character
{
private:

public:
	static const std::uint8_t WARRIOR_HPGROWTH = 8;
	Warrior()
		: Character(20, 6, WARRIOR_HPGROWTH)
	{

	}

};