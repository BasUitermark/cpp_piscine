/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 14:11:57 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 19:20:46 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		const std::string&	getType();
		void				setType(std::string newType);
	private:
		std::string	type;
};

#endif