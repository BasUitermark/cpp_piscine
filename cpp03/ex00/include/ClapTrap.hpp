#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

#define DEBUG_MESSAGE 0

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& toCopy);
		ClapTrap& operator = (const ClapTrap& toAssign);

		void	setName(std::string name);
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int hitPoints);
		void	setAttackDamage(int attackDamage);

		std::string	getName(void);
		int	getHitPoints(void);
		int	getEnergyPoints(void);
		int	getAttackDamage(void);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif