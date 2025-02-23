#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type) : type(type) {}

    std::string getType() const
    {
        return type;
    }

    void setType(std::string newType)
    {
        type = newType;
    }
};

class HumanA
{
private:
    std::string name;
    Weapon &weapon; // Reference to a Weapon (must always have one)
public:
    HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

    void attack() const
    {
        std::cout << name << " attacks with " << weapon.getType() << std::endl;
    }
};

class HumanB
{
private:
    std::string name;
    Weapon *weapon; // Pointer to a Weapon (can be nullptr)
public:
    HumanB(std::string name) : name(name), weapon(nullptr) {}

    void setWeapon(Weapon &newWeapon)
    {
        weapon = &newWeapon;
    }

    void attack() const
    {
        if (weapon)
            std::cout << name << " attacks with " << weapon->getType() << std::endl;
        else
            std::cout << name << " has no weapon to attack with!" << std::endl;
    }
};

int main()
{
    {
        // Weapon club = Weapon("crude spiked club");
        HumanA aa();
        // HumanA bob("Bob", club);
        // bob.attack();
        // club.setType("some other type of club");
        // bob.attack();
    }
    {
        // Weapon club = Weapon("crude spiked club");
        // HumanB jim("Jim");
        // jim.setWeapon(club);
        // jim.attack();
        // club.setType("some other type of club");
        // jim.attack();
    }
}
