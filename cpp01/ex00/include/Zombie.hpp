/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 09:58:26 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 10:49:10 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void);

	private:
		std::string	name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif