#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);

    void attack(const std::string &target);
    void guardGate();
};

#endif
