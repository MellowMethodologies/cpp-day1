#ifndef HUMAN_HPP
#define HUMAN_HPP

    #include "Weapon.hpp"
    #include <string>
    #include <iostream>

    class HumanB{
        private:
            Weapon      WeaponB;
            std::string name;
        public:
            HumanB(std::string name, Weapon Weapon);
            ~HumanB();
            void attack();
    };

#endif