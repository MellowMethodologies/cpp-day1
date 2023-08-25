/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:39 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:40 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon(" crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType(" some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon(" crude spiked club");
        HumanB jim("Jim");
        // jim.setWeapon(club);
        jim.attack();
        club.setType(" some other type of club");
        jim.attack();
    }
    return 0;
}