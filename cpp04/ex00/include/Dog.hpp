#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
	private:
	
	public:
		Dog();
		~Dog();
		Dog(const Dog& toCopy);
		Dog& operator = (const Dog& toAssign);

		void	makeSound() const;
};

#endif