#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	N1("N1");
	ClapTrap	N2("N2");
	ClapTrap	N3;
	ClapTrap	N4(N2);

	ScavTrap	S1("S1");
	ScavTrap	S2(S1);

	FragTrap	F1("F1");

	std::cout << std::endl;

	N1.attack("enemy");
	N1.takeDamage(10);
	// N1.beRepaired(10);
	N1.status();
	std::cout << std::endl;
	N3 = N1;

	N2.takeDamage(10);
	N2.attack("enemy");
	// N2.beRepaired(8);
	N2.status();
	std::cout << std::endl;
	
	N3.attack("enemy");
	N3.takeDamage(8);
	N3.beRepaired(8);
	N3.status();

	std::cout << std::endl;

	N4.attack("enemy");
	N4.takeDamage(8);
	N4.beRepaired(8);
	N4.status();
	std::cout << std::endl;

	S1.attack("enemy");
	S1.takeDamage(8);
	S1.beRepaired(20);
	S1.guardGate();
	S1.status();
	std::cout << std::endl;

	S2.attack("enemy");
	S2.takeDamage(8);
	S2.beRepaired(20);
	S2.guardGate();
	S2.status();
	std::cout << std::endl;

	F1.attack("enemy");
	F1.takeDamage(8);
	F1.beRepaired(20);
	F1.highFivesGuys();
	F1.status();
}