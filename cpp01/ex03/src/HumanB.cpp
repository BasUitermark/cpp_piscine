#include <Weapon.hpp>
#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name)
: name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
	return;
}

void	HumanB::attack()
{
	if (!this->weapon)
		std::cout << this->name << " attacks with their fists" << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}