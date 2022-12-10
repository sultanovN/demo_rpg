#pragma once
#include "hitPointsTypes.h"

class Hp
{
private:
	hpType m_current_hp;
	hpType m_max_hp;

public:
	Hp(hpType max_hp = 1)
		: m_max_hp(max_hp), m_current_hp(max_hp)
	{
	}

	//returns true if succesfully set
	bool setMaxHp(hpType new_max_hp)
	{
		if (new_max_hp < 1)
			return false;

		m_max_hp = new_max_hp;

		if (m_current_hp > m_max_hp)
			m_current_hp = m_max_hp;

		return true;
	}

	hpType getMaxHp() const { return m_max_hp; }

	hpType getCurrentHp() const { return m_current_hp; }

	void takeDamage(hpType damage)
	{
		if (damage > m_current_hp)
		{
			m_current_hp = 0;
			return;
		}

	}

	void heal(hpType amount)
	{
		if (amount + m_current_hp > m_max_hp)
		{
			m_current_hp = m_max_hp;
			return;
		}

		m_current_hp += amount;
	}
};