/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:51:24 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 13:34:43 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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