/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:22:28 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:22:29 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

    #include "Weapon.hpp"
    #include <string>
    #include <iostream>

    class HumanA{
        private:
            Weapon      &WeaponA; //reference because a reference cannot be NULL
            std::string _name;
        public:
            HumanA(std::string name, Weapon &We);
            ~HumanA();
            void attack();
    };

#endif