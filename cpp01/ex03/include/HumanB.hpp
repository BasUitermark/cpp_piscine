/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 17:47:48 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 19:20:16 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMAN_HPP

# include <string>
# include <Weapon.hpp>

class HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();

	void			setWeapon(Weapon& newWeapon);
	const Weapon*	getWeapon();
	void			attack();

	private:
	std::string name;
	Weapon*		weapon;
};

#endif