#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
	private:
	
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& toCopy);
		WrongCat& operator = (const WrongCat& toAssign);


		void	makeSound() const;
};

#endif