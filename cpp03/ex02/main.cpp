#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{

    ClapTrap red("Redouane");
    ScavTrap xx("xx");
    FragTrap zz("zz");

    red.setAttackDamage(5);
    red.attack("xx");
    red.takeDamage(3);
    red.beRepaired(4);

    xx.attack("redouane");
    xx.takeDamage(40);
    xx.beRepaired(20);
    xx.guardGate();

    zz.attack("redouane");
    zz.takeDamage(25);
    zz.beRepaired(15);
    zz.highFivesGuys();

    return 0;
}
