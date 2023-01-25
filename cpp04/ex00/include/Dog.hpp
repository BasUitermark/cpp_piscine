/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:51:24 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 11:05:56 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
	private:
	
	public:
		Dog();
		~Dog();

		void	makeSound() const;
};

#endif