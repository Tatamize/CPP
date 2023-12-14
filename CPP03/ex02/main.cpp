#include "header/main.h"

int	main()
{
	//ClapTrap robo("robooooot");
	//ClapTrap monst("MonstX");
	//robo.beRepaired(10);
	//robo.takeDamage(2);
	//robo.attack("HIII");

	ScavTrap scavy("SCAVY");
	scavy.attack("Dareka");
	scavy.guardGate();

	FragTrap fency("FENCY");
	fency.attack("WHO");
	fency.highFivesGuys();
	fency.takeDamage(200);
	fency.highFivesGuys();

	return (0);
}
