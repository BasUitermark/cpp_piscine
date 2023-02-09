#include <Zombie.hpp>

int main(void)
{
	Zombie	*Zombie;

	randomChump("Chumpy");
	
	Zombie = newZombie("Zom");
	Zombie->announce();
	delete Zombie;

	return (0);
}
