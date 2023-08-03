#include "HumanB.hpp"


HumanB::HumanB(std::string name, Weapon WeaponB)
{
    this->name = name;
    this->WeaponB = WeaponB;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (HumanB.WeaponB)
        std::cout<< this->name << "attacks with their" << this->WeaponB.getType()<< std::endl;
}