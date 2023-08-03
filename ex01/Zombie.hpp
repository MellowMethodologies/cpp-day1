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