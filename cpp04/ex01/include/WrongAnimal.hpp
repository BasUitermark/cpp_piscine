/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:38:17 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 10:42:44 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	private:
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& toCopy);
		WrongAnimal& operator = (const WrongAnimal& toAssign);

		std::string		getType() const;
		void			setType(std::string type);

		virtual void	makeSound() const;

	protected:
		std::string	_type;
};

#endif