#pragma once
#include "hp.h"

class Character
{
private:
	Hp m_character_hp{5};
	hpType m_damage;
	const std::uint8_t m_hp_growth;
	std::uint8_t m_character_level;
public:
	Character(Hp character_hp, hpType damage, const std::uint8_t hp_growth)
		: m_character_hp{character_hp}, m_damage{damage}, m_hp_growth{hp_growth}, m_character_level{1}
	{

	}

	void levelUp()
	{
		++m_character_level;
		m_character_hp.setMaxHp(m_hp_growth);
	}
};