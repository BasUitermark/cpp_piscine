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

const Weapon*	HumanB::getWeapon()
{
	const Weapon*	get = this->weapon;
	return (get);
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
	return;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->getWeapon()->getType() << std::endl;
}