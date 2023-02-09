#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	private:
	
	public:
		Animal();
		Animal(std::string type);
		~Animal();
		Animal(const Animal& toCopy);
		Animal& operator = (const Animal& toAssign);

		std::string		getType() const;
		void			setType(std::string type);

		virtual void	makeSound() const;

	protected:
		std::string	_type;
};

#endif