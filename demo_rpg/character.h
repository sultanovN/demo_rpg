#pragma once
#include "hp.h"
#include "levelsystem.h"

class Character
{
private:
	
	const stattype m_hp_growth;
	const stattype m_strength;
	const stattype m_intellegence;
	
public:
	Hp m_character_hp;
	LevelSystem m_level;
	Character(Hp character_hp, const stattype hp_growth, const stattype strength, const stattype intellegence, stattype character_level = 1)
		: m_character_hp{character_hp}, m_hp_growth{hp_growth}, 
		m_strength{strength}, m_intellegence{intellegence}
	{

	}


	stattype getStrength() const { return m_strength; }
	stattype getIntellegence() const { return m_intellegence; }


};