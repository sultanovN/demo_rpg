#pragma once
#include <cstdint>

class LevelSystem
{
public:
	LevelSystem()
		: m_current_level{1u}, m_current_exp{0u}, m_level_up_available{0}
	{

	}

	void gainExp(std::uint64_t gained_exp)
	{
		m_current_exp += gained_exp;
	}

protected:
	std::uint16_t m_current_level;
	std::uint64_t m_current_exp;
	std::uint8_t m_level_up_available;
};