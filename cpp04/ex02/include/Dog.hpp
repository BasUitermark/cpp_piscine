#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal
{
	private:
		Brain*	dogBrain;
	
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& toCopy);
		Dog& operator = (const Dog& toAssign);

		virtual void	makeSound();
};

#endif