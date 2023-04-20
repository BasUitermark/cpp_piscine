#include <Weapon.hpp>
#include <string>

Weapon::Weapon(std::string newType)
: type(newType)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string&	Weapon::getType()
{
	const std::string& ref = this->type;
	return(ref);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
	return;
}