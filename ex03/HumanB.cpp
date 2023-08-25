/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:32 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:33 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->WeaponB = &weapon;
}

HumanB::HumanB() { }
HumanB::~HumanB() { }

void HumanB::attack()
{
        std::cout<< this->_name << "attacks with their " << this->WeaponB->getType()<< std::endl;
}