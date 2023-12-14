#include "header/main.h"

Harl::Harl()
{
	pFarray[0] = &Harl::debug;
	pFarray[1] = &Harl::info;
	pFarray[2] = &Harl::warning;
	pFarray[3] = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int	Harl::level_to_i(std::string level)
{
	std::string	types[4] = { "debug", "info", "warning", "error" };

	for(int i = 0; i < 4 ; i++)
	{
		if (level == types[i])
			return(i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	int	i = level_to_i(level);

	if (i >= 0 && i < 4)
		(this->*pFarray[i])();
	else
		std::cout << "!!the level is not called correctly!!\n";
}