#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie() { }
Zombie::~Zombie()
{
    std::cout<< this->name << " got killed!"<< std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::nameSet(std::string name)
{
    std::cout<< "here"<< std::endl; 
    this->name = name;
}