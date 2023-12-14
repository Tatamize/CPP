#include "header/main.h"

int	main()
{
	DiamondTrap dia("DIA");
	dia.whoAmI();
	dia.attack("ROBOT");
	dia.takeDamage(5);
	dia.beRepaired(50);
	dia.takeDamage(200);
	dia.attack("ROBOT");
	colornote_DT(0, "The status of dia",dia);

	std::cout << std::endl;
	std::cout << "test for copying" << std::endl;
	DiamondTrap copyd(dia);
	copyd.whoAmI();
	colornote_DT(0, "The status of copy of dia",copyd);
	return (0);
}
