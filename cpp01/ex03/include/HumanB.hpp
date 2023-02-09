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