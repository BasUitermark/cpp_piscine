#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
	private:
	
	public:
		Cat();
		~Cat();
		Cat(const Cat& toCopy);
		Cat& operator = (const Cat& toAssign);


		void	makeSound() const;
};

#endif