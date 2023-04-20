#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain& toCopy);
		Brain& operator = (const Brain& toAssign);
};

std::string toString(int i);

#endif