#ifndef HUMAN_HPP
#define HUMAN_HPP

    #include "Weapon.hpp"
    #include <string>
    #include <iostream>

    class HumanA{
        private:
            Weapon      WeaponA;
            std::string name;
        public:
            HumanA(std::string name, Weapon &We);
            ~HumanA();
            void attack();
    };

#endif