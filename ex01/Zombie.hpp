/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:08 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:09 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
        public:
            void announce( void );
            Zombie();
            void nameSet(std::string name);
            Zombie(std::string);
            ~Zombie();
        private:
            std::string name;
};

Zombie  *zombieHorde( int N, std::string name );

#endif