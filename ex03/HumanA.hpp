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