#include "ClapTrap.hpp"

int main()
{
    ClapTrap red("Redouane");
    red.setAttackDamage(10);
    red.attack("xx");

    ClapTrap xx("xx");
    xx.takeDamage(5);
    xx.beRepaired(10);
    return 0;
}

// int main()
// {
//     ClapTrap red("redouane");
//     ClapTrap xx("xx");
//     ClapTrap zz("zz");

//     red.setAttackDamage(10);
//     red.attack("xx");
//     xx.takeDamage(red.getAttackDamage());
//     red.attack("xx");
//     xx.takeDamage(red.getAttackDamage());

//     xx.attack("redouane");
//     xx.beRepaired(3);

//     zz.beRepaired(10);
//     zz.setAttackDamage(10);

//     red.beRepaired(90);
//     red.attack("zz");
//     zz.takeDamage(red.getAttackDamage());

//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");
//     red.takeDamage(zz.getAttackDamage());
//     zz.attack("redouane");

//     zz.beRepaired(100);
//     return 0;
// }
