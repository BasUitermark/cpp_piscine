/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:02:23 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 11:05:51 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
	private:
	
	public:
		Cat();
		~Cat();

		void	makeSound() const;
};

#endif