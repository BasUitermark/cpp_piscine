#include "../include/Base.hpp"
#include "../include/Colors.hpp"
#include <iostream>

Base::~Base()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Data default destructor called" RESET << std::endl;
}