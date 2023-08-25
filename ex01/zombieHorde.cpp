/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:11 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:12 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie *zombies = new Zombie[N];

    while (i < N)
    {
        zombies[i].nameSet(name);
        i++;
    }
    return zombies;
}
