#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

#define DEBUG_MESSAGE 1

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
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

		void	status(void);
};

#endif