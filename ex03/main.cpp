#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
	Weapon club = Weapon("crude spiked club");

	HumanA human("Bob", club);
	human.attack();
	club.setType("some other type of club");
	human.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}

	return (0);
}