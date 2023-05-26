#ifndef SPAN_HPP
# define SPAN_HPP

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

#include <vector>

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_array;

	public:
		Span(unsigned int n);
		~Span();
		Span(const Span& toCopy);

		Span&	operator = (const Span& toAssign);

		void	addNumber(int n);
		void	addNumbers(const std::vector<int>& numbers);
		int		shortestSpan() const;
		int		longestSpan() const;

	private: 
		class ArrayOverflow: std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Addition will overflow maximum size of array");
				}
		};
		class ArraySizeTooSmall: std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Array size is too small for this function");
				}
		};
};

#endif