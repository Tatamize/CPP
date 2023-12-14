
#include "header/BitcoinExchange.hpp"
#include "header/tools.hpp"

BitcoinExchange::BitcoinExchange()
{
	exit(error_return("2 arguments is needed (input filename and csvdata)\n"));
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(std::string filename, std::map<int, double> valuedata): _valuedata(valuedata)
{
	std::string input_line;
	int			line_num = 1;

	std::ifstream infile(filename);
	if (!infile)
		exit(error_return("Error: can't open inputfile\n"));
	while (std::getline(infile, input_line))
	{
		try
		{
			if (input_line == "date | value")
			{
				switch(line_num)
				{
					case 1:
						break;
					default:
						throw std::runtime_error("Column header line is only at the beginning");
				}
				line_num++;
				continue;
			}
			this->show_day_value(input_line);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
		line_num++;
	}
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& source)
{
	_valuedata = source._valuedata;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& source)
{
	*this = source;
}

void	BitcoinExchange::show_day_value(std::string input_line)
{
	int	day;
	double	value;
	double	amount;
	double	total;
	std::string	data_str;
	std::cout.precision(3);

	if (input_line == "")
		throw std::runtime_error("Empty line");
	input_line = input_line.replace(10, 3, ","); 
	day = get_date(input_line);
	value = find_value(day, _valuedata);
	amount = get_value(input_line);
	if (amount < 0)
		throw std::runtime_error("The amount should not be minus");
	if (amount > 1000)
		throw std::runtime_error("too large a number.");
	total = value * amount;
	data_str = std::to_string(day);
	data_str = data_str.insert(4, "-");
	data_str = data_str.insert(7, "-");
	// std::cout << std::fixed;       // to show more zero after precision
	std::cout << data_str << " => " << amount  << " = "<< total << std::endl;
}