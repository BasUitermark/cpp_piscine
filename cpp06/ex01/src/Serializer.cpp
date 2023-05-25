#include "../include/Serializer.hpp"
#include "../include/Colors.hpp"
#include <iostream>
#include <stdint.h>

//========== Constructors ==========//

Serializer::Serializer()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Serializer default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

Serializer::~Serializer()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Serializer default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Serializer::Serializer(const Serializer& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Serializer copy constructor called" RESET << std::endl;
	(void)toCopy;
}

//========== Assignment Operator ==========//

Serializer& Serializer::operator = (const Serializer& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Serializer copy assignment operator called" RESET << std::endl;
	(void)toAssign;
	
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	cast = reinterpret_cast<uintptr_t>(ptr);
	return (cast);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* cast = reinterpret_cast<Data*>(raw);
	return (cast);
}