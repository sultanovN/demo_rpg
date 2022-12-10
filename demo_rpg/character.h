#pragma once
#include "hp.h"

class Character
{
private:
	
	const stattype m_hp_growth;
	stattype m_character_level;
	const stattype m_strength;
	const stattype m_intellegence;
public:
	Hp m_character_hp;
	Character(Hp character_hp, const stattype hp_growth, const stattype strength, const stattype intellegence, stattype character_level = 1)
		: m_character_hp{character_hp}, m_hp_growth{hp_growth}, 
		m_strength{strength}, m_intellegence{intellegence}, m_character_level{ character_level }
	{

	}

	stattype getCharacterLevel() const { return m_character_level; }
	stattype getStrength() const { return m_strength; }
	stattype getIntellegence() const { return m_intellegence; }

	void levelUp()
	{
		++m_character_level;
		m_character_hp.setMaxHp(m_hp_growth);
	}
};