#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& toCopy);
		WrongCat& operator = (const WrongCat& toAssign);

		std::string getType() const;

		void	makeSound() const;
};

#endif