#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), healthOfClap(10), energyPoint(10), attackDamage(0)
{
    std::cout << "Default ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : healthOfClap(10), energyPoint(10), attackDamage(0)
{
    this->name = name;
    std::cout << "ClapTrap " << getName() << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << getName() << " has been destroyed!" << std::endl;
}

void ClapTrap::setHealth(int healthOfClap)
{
    this->healthOfClap = healthOfClap;
}

void ClapTrap::setEnergyPoint(int energyPoint)
{
    this->energyPoint = energyPoint;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}
unsigned int ClapTrap::getHealth()
{
    return this->healthOfClap;
}
int ClapTrap::getEnergyPoint()
{
    return this->energyPoint;
}
int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

std::string ClapTrap::getName()
{
    return this->name;
}
void ClapTrap::attack(const std::string &target)
{
    if (getHealth() <= 0 || getEnergyPoint() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " can't attack!" << std::endl;

        return;
    }

    this->energyPoint--;
    std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHealth() <= 0)
    {
        std::cout << "ClapTrap is already destroyed" << std::endl;
        return;
    }
    if (amount >= healthOfClap)
        healthOfClap = 0;
    else
        healthOfClap -= amount;

    std::cout << "ClapTrap " << name << " took " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getHealth() <= 0 || getEnergyPoint() <= 0)
    {
        std::cout << "ClapTrap " << name << " can't repair" << std::endl;
        return;
    }
    this->healthOfClap += amount;
    energyPoint--;
    std::cout << "ClapTrap " << name << " repaired" << std::endl;
}