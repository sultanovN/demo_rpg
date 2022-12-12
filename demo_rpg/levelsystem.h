#pragma once
#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;

class LevelSystem
{
public:
	LevelSystem()
		: m_current_level{1u}, m_current_exp{0u}, m_exp_to_next_level{100u}
	{

	}

	void gainExp(exptype gained_exp)
	{
		m_current_exp += gained_exp;
		checkIfLeveled();
	}

protected:
	leveltype m_current_level;
	exptype m_current_exp;
	exptype m_exp_to_next_level;

	void checkIfLeveled()
	{
		if (m_current_exp > m_exp_to_next_level)
		{
			++m_current_level;
			m_exp_to_next_level *= 2u;
		}
			
	}
};