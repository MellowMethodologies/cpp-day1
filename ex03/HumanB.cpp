#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->WeaponB = &weapon;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
        std::cout<< this->_name << "attacks with their " << this->WeaponB->getType()<< std::endl;
}