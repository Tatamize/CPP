#include "header/main.h"

int	main()
{
	{
		std::cout << std::endl << "-- basic test, make 1 ScavTrap! --" << std::endl;
		ScavTrap scavy("SCAVY");
		scavy.attack("TOM");
		scavy.takeDamage(3);
		scavy.beRepaired(2);
	}
	std::cout << std::endl;
	{
		std::cout << std::endl << "-- check again ClapTrap! --" << std::endl;
		ClapTrap ct("CT");
		ct.attack("PEN");
		std::cout << std::endl << "-- now make new ScavTrap! --" << std::endl;
		ScavTrap scv("SCAV");
		scv.attack("PEKE");
		std::cout << std::endl << "-- now make a copy of ScavTrap! --" << std::endl;
		ScavTrap sss(scv); // copy scv 
		sss.attack("POKO");
		sss.attack("POKO");
		sss.beRepaired(55);
		sss.takeDamage(20);
	}
	// {
	// 	ClapTrap ct("CT");
	// 	ClapTrap ct2 = ct;
	// 	ct2.attack("HELO");
	// }
	// std::cout << std::endl;
	// {
	// 	ScavTrap ct("CT");
	// 	std::cout << std::endl;
	// 	ScavTrap ct2 = ct;
	// 	std::cout << std::endl;
	// 	ct2.attack("HELO");
	// }
	return (0);
}
