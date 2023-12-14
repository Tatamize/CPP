#include "header/main.h"

int	main()
{
	ClapTrap roboA("roboA"); 		// make 1 robot

	roboA.attack("Someone");
	roboA.attack("S2");
	roboA.attack("S3");
	roboA.attack("S4");
	roboA.attack("S5");
	roboA.beRepaired(1);
	roboA.takeDamage(20);			// got too much damage
	roboA.beRepaired(2);			// can't repair
	roboA.attack("Someone");		// cant attack

	std::cout << std::endl << "now create a copy of roboA" << std::endl;
	ClapTrap	roboB(roboA);		// make another robot's copy
	roboB.attack("Yey");
	ClapTrap	roboC("roboC");		// make new robot
	roboC.attack("PONG");
	roboC = roboB;					// copy from B to C
	roboC.attack("PONG");
	return (0);
}
