#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& toCopy);
		Animal& operator = (const Animal& toAssign);

		std::string		getType() const;

		virtual void	makeSound() const;
};

#endif