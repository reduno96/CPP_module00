#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    healthOfClap = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (healthOfClap <= 0 || energyPoint <= 0)
    {
        std::cout << "ScavTrap " << name << " can't attack!" << std::endl;
        return;
    }

    energyPoint--;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}
