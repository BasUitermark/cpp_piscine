#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& toCopy);
		WrongAnimal& operator = (const WrongAnimal& toAssign);

		std::string	getType() const;

		void	makeSound() const;
};

#endif