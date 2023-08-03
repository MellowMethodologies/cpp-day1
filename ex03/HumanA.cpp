#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &we): WeaponA(we), _name(name)
{
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout<< this->_name << "attacks with their" \
    << this->WeaponA.getType()<< std::endl;
}