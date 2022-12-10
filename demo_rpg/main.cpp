#include <iostream>
#include "classes.h"

int main()
{
	Warrior Jack;

	Mage Sara;

	Cleric Maria;

	Rogue Hensel;

	std::cout << "Warrior Jack: \nStrength: " << Jack.getStrength() << "\nIntellegence: " << Jack.getIntellegence() 
		<< "\nHP: " << Jack.m_character_hp.getMaxHp()<<"\n\n";

	std::cout << "Mage Sara: \nStrength: " << Sara.getStrength() << "\nIntellegence: " << Sara.getIntellegence()
		<< "\nHP: " << Sara.m_character_hp.getMaxHp() << "\n\n";

	std::cout << "Cleric Maria: \nStrength: " << Maria.getStrength() << "\nIntellegence: " << Maria.getIntellegence()
		<< "\nHP: " << Maria.m_character_hp.getMaxHp() << "\n\n";

	std::cout << "Rogue Hensel: \nStrength: " << Hensel.getStrength() << "\nIntellegence: " << Hensel.getIntellegence()
		<< "\nHP: " << Hensel.m_character_hp.getMaxHp() << "\n\n";

	return 0;
}