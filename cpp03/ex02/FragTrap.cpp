#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap has been created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap has been destroyed" << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    (void)name;
    healthOfClap = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap has been created" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap requests a high five" << std::endl;
}
