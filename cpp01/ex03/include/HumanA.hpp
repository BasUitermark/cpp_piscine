/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 14:11:57 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 18:35:34 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <Weapon.hpp>

class	HumanA
{
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();
	void	setWeapon(Weapon& newWeapon);

	private:
	std::string	name;
	Weapon&		weapon;
};

#endif