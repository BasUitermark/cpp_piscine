#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

#include <exception>
#include <iterator>

class ElementNotFound: public std::exception
{
	public:
		const char* what() const throw()
		{
			return (RED "Target not in array" RESET);
		}
};

template<typename T>
typename T::iterator easyfind(T container, int n);

#include "../src/easyfind.tpp"

#endif