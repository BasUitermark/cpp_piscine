/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 09:58:26 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 15:10:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	public:
		Zombie();
		~Zombie();

		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	name;

};

Zombie	*zombieHorde(int N, std::string name);


#endif