/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:38:17 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 11:06:35 by buiterma      ########   odam.nl         */
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

		std::string		getType() const;

		virtual void	makeSound() const;

	protected:
		std::string	_type;
};

#endif