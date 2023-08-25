/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:23 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:24 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &we): WeaponA(we), _name(name) { }

HumanA::~HumanA() { }

void HumanA::attack()
{
    std::cout<< this->_name << "attacks with their" \
    << this->WeaponA.getType()<< std::endl;
}