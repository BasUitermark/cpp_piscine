/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 14:11:57 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 15:03:25 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	HumanA
{
	public:
		HumanA(std::string type);
		~HumanA();

		void	attack(std::string weapon);
	private:
		std::string	weapon;
		std::string	name;
};

#endif