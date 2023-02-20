#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

# define DEBUG_MESSAGE 1

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void);

	private:
		std::string	_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif