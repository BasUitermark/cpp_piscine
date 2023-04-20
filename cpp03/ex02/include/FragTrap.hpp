#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../include/ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& toCopy);
		FragTrap& operator = (const FragTrap& toAssign);

		void	highFivesGuys();
};

#endif