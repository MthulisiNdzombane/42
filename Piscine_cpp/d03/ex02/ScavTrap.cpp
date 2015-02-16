#include "ScavTrap.hpp"

#include <iostream>
#include <stdlib.h>
#include <time.h>

ScavTrap::ScavTrap(void) :
	ClapTrap()
{
	std::cout << "Constructor: A new ScavTrap(" << this->m_Name << ") is born !" << std::endl;
}

ScavTrap::ScavTrap(std::string p_Name) :
	ClapTrap(p_Name, 100, 100, 50, 50, 20, 15, 3)
{
	std::cout << "Constructor: A new ScavTrap(" << this->m_Name << ") is born !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & p_ScavTrap) :
	ClapTrap(p_ScavTrap)
{
	std::cout << "Constructor copy: A new ScavTrap(" << this->m_Name << ") is born !" << std::endl;
	*this = p_ScavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor: A ScavTrap(" << this->m_Name << ") is dead..." << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	std::string challenges[] =
	{
		"Catch the SC4V-TP",
		"Find the energy",
		"Kill Dr Zed",
		"I Nuke you",
		"I Dare you! I double Dare you!!",
	};

	if (this->m_nEnergyPoints >= ENERGY_COST)
	{
		std::cout << "SC4V-TP (" << this->m_Name << ") challenge you with " << challenges[rand() % 4 + 1] << std::endl;
		this->m_nEnergyPoints -= ENERGY_COST;
	}
	else
		std::cout << "Not enough energy !" << std::endl;
}

