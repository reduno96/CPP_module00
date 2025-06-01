#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap red("Redouane");

    ScavTrap xx("xx");

    red.setAttackDamage(5);
    red.attack("xx");
    red.takeDamage(3);
    red.beRepaired(4);

    xx.attack("redouane");
    xx.takeDamage(40);
    xx.beRepaired(20);
    xx.guardGate();

    return 0;
}
