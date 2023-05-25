
#ifndef ARRAY_HPP
# define ARRAY_HPP

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
class Array
{
	private:
	T*				_array;
	unsigned int	_len;

	public:
	Array();
	Array(unsigned int n);
	~Array();
	
	Array(const Array& copy);
	Array&	operator= (const Array& assignment);
	T&		operator[] (size_t i) const;

	size_t	size(void) const;

	private:
	class	IndexOutOfBoundsException: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

template<typename T>
std::ostream& operator<< (std::ostream& o, const Array<T>& a);

#include "../src/Array.tpp"

#endif