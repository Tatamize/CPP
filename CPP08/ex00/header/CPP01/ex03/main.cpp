#include "header/main.h"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}

// int	main()
// {
// 	colornote(2, "Weapon club(crude spiked club) is set", "");
// 	Weapon club = Weapon("crude spiked club");
// 	std::cout << "\n";

// 	colornote(2, "HumanA bob(Bob) is born with club", "");
// 	HumanA bob("Bob", club);
// 	bob.attack();
// 	std::cout << "\n";

// 	colornote(2, "club(crude spiked club) name is changed to (some other type of club)", "");
// 	club.setType("some other type of club");
// 	bob.attack();
// 	std::cout << "\n";

// 	colornote(2, "HumanB jim(Jim) is born without weapon", "");
// 	HumanB jim("Jim");
// 	jim.attack();
// 	std::cout << "\n";

// 	colornote(2, "HumanB Jim gets club", "");
// 	jim.setWeapon(club);
// 	jim.attack();
// 	std::cout << "\n";

// 	colornote(2, "club(some other type of club) name is changed to (MEGA strong club)", "");
// 	club.setType("MEGA strong club");
// 	bob.attack();
// 	jim.attack();
// 	std::cout << "\n";

// 	colornote(2, "Now Bob changed his name to BOBBY", "");
// 	bob.set_name("BOBBY");
// 	bob.attack();
// 	std::cout << "\n";

// 	return (0);
// }


