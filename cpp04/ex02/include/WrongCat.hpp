/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:02:23 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 10:41:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
	private:
	
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& toCopy);
		WrongCat& operator = (const WrongCat& toAssign);

		void	makeSound() const;
};

#endif