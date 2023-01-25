/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:02:23 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 13:34:32 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
	private:
		Brain*	catBrain;

	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& toCopy);
		Cat& operator = (const Cat& toAssign);

		virtual void	makeSound();
};

#endif