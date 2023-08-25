/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:21:52 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:21:53 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

    class Zombie{
        public:
            void announce( void );
            Zombie(std::string);
            Zombie();
            ~Zombie();
        private:
            std::string name;
    };

    Zombie *newZombie( std::string name );
    void    randomChump( std::string name );

#endif