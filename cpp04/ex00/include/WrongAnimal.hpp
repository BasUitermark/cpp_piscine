#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	private:
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& toCopy);
		WrongAnimal& operator = (const WrongAnimal& toAssign);


		std::string		getType() const;
		void			setType(std::string type);

		void	makeSound() const;

	protected:
		std::string	_type;
};

#endif