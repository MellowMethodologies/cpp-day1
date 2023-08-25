/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:35 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:37 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

    #include "Weapon.hpp"
    #include <string>
    #include <iostream>

    class HumanB{
        private:
            Weapon      *WeaponB; //pointer because it doesn't get initialised at the beginning
            std::string _name;
        public:
            HumanB(std::string name);
            HumanB();
            ~HumanB();
            void attack();
            void setWeapon(Weapon &we);
    };

#endif