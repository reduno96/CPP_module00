#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap has been created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    healthOfClap = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a high five" << std::endl;
}
