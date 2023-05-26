#include "../include/easyfind.hpp"
#include <iterator>
#include <vector>

const char* ElementNotFound::what() const throw()
{
	return (RED "EXCEPTION: Target not in array" RESET);
}

template<typename T>
typename T::iterator easyfind(T container, int find)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), find);
	if (ret == container.end())
		throw ElementNotFound();
	return (ret);
}