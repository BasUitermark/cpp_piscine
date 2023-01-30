/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:38:17 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 10:32:33 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& toCopy);
		Animal& operator = (const Animal& toAssign);

		std::string		getType() const;
		void			setType(std::string type);

		virtual void	makeSound() = 0;

	protected:
		std::string	_type;
};

#endif