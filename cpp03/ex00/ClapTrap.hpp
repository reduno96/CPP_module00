#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int healthOfClap;
    int energyPoint;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    std::string getName();
    unsigned int getHealth();
    int getEnergyPoint();
    int getAttackDamage();
    void setHealth(int healthOfClap);
    void setEnergyPoint(int energyPoint);
    void setAttackDamage(int attackDamage);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
