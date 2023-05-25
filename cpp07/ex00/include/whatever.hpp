#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

template <typename T> 
void swap(T& x, T& y)
{
	T	swap;

	swap = x;
	x = y;
	y = swap;
}

template <typename T>
T min(T& x, T& y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T& x, T& y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif