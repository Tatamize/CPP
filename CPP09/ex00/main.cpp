#include <iostream>
#include <fstream>
#include "header/BitcoinExchange.hpp"
#include "header/tools.hpp"

int	main(int argc, char **argv)
{
	std::string data_line;
	std::map<int, double> valuedata;

	if (argc != 2)
		exit(error_return("Error: could not open file."));

	valuedata = set_mapdata("data.csv", data_line);	
	std::cout << "data size is " << valuedata.size() << std::endl << std::endl;
	
	BitcoinExchange todaysvalue(argv[1], valuedata);

	return(0);
}