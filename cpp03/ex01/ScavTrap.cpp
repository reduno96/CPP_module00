#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    (void)name;
    healthOfClap = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << "ScavTrap has been created" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << "is now in Gate keeper mode" << std::endl;
}