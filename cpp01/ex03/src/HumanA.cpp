#include <Weapon.hpp>
#include <HumanA.hpp>
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
: name(name), weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::setWeapon(Weapon& newWeapon)
{
	this->weapon = newWeapon;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}