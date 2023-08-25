/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:24:13 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/23 14:24:14 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

    class Weapon{
        private:
            std::string type;
        public:
            const std::string getType();
            void setType(std::string type);
            Weapon(std::string type);
            ~Weapon();
    };

#endif