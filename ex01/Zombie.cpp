/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:03 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:05 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie() { }

Zombie::~Zombie()
{
	std::cout<< this->name << " got killed!"<< std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::nameSet(std::string name)
{
	std::cout<< "here"<< std::endl; 
	this->name = name;
}