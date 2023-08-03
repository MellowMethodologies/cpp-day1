#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &we)
{
    this->name = name;
    this->WeaponA = we;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout<< this->name << "attacks with their" \
    << this->&Weapon.getType()<< std::endl;
}