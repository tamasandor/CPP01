#include "HumanA.hpp"

int	main()
{
	{
	Weapon club = Weapon("crude spiked club");

	HumanA human("Bob", club);
	human.attack();
	club.setType("some other type of club");
	human.attack();
	}
}