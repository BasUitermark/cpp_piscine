#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& toCopy);
		ScavTrap& operator = (const ScavTrap& toAssign);

		void	guardGate();
		void	attack(std::string target);
};