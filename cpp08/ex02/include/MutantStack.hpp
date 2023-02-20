
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

#define DEBUG_MESSAGE 0

#include <exception>
#include <iostream>

template<typename T>
class MutantStack
{
	private:
	T*	_array;
	int	_len;

	public:
	MutantStack();
	MutantStack(unsigned int n);
	~MutantStack();
	
	MutantStack(const MutantStack& copy);
	MutantStack&	operator= (const MutantStack& assignment);
	T&		operator[] (size_t i) const;

	private:
	class	IndexOutOfBoundsException: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return (RED"Exception: Accessed index out of Array bounds"RESET);
			}
	};
};

#include "../src/MutantStack.tpp"

#endif