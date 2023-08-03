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
            ~HumanB();
            void attack();
            void setWeapon(Weapon &we);
    };

#endif