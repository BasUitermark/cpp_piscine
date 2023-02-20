#include "../include/ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	N1("N1");
	ClapTrap	N2("N2");
	ClapTrap	N3;
	ClapTrap	N4(N2);

	std::cout << std::endl;

	N1.attack("enemy");
	N1.takeDamage(10);
	// N1.beRepaired(10);
	std::cout << std::endl;
	N3 = N1;

	N2.takeDamage(10);
	N2.attack("enemy");
	std::cout << std::endl;
	
	N3.attack("enemy");
	N3.takeDamage(8);
	N3.beRepaired(8);
	std::cout << N3.getName() << " has " << N3.getEnergyPoints() << " energy points left!" << std::endl;
	std::cout << std::endl;

	N4.attack("enemy");
	N4.takeDamage(8);
	N4.beRepaired(8);
	std::cout << std::endl;
}