#include <Zombie.hpp>
#include <sstream>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie				*horde;
	std::ostringstream	ss;
	std::string			str;

	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		ss << i + 1;
		str = ss.str();
		ss.str("");
		ss.clear();
		horde[i].setName(name + " " + str);
	}
	return(horde);
}