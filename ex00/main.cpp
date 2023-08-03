#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Boss");

	randomChump("Vladimir");
	zombie->announce();

	delete zombie;
}