#include <iostream>
#include <fstream>
#include "header/BitcoinExchange.hpp"
#include "header/tools.hpp"

int	error_return(std::string text)
{
	std::cout << text << std::endl;
	return (1);
}

int	get_date(std::string data_line)
{
	std::string	year;
	std::string	month;
	std::string	day;

	if (data_line.find('-') != 4)
		throw std::runtime_error("Not valid year info");	
	year = data_line.substr(0, 4);
	data_line = data_line.substr(5, data_line.length());
	if (data_line.find('-') != 2)
		throw std::runtime_error("Not valid month info");	
	month = data_line.substr(0, 2);
	data_line = data_line.substr(3, data_line.length());
	if (data_line.find(',') != 2)
		throw std::runtime_error("Not valid date info");	
	day = data_line.substr(0, 2);
	if (std::atoi(year.c_str()) < 2000 || std::atoi(year.c_str()) > 2023 \
		|| std::atoi(month.c_str()) < 1 || std::atoi(month.c_str()) > 12 \
		|| std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 31)
	{
		std::string err_msg = "bad input => " + year + "-" + month + "-" + day;
		throw std::runtime_error(err_msg);	
	}
	std::string ymd = year + month + day;
	return (atoi(ymd.c_str()));
}

void	check_num(std::string num)
{
	int	point = 0;
	if (num[0] == '-')
		throw std::runtime_error("not a positive number.");
	for (size_t pos = 0; pos < num.size(); pos++)
	{
		if (!std::isdigit(num[pos]) && num[pos] != '.')
			throw std::runtime_error("not valid value number.");
		if (num[pos] == '.')
			point++;
		if (point > 1)
			throw std::runtime_error("too many point in value.");
	}
}

std::map<int, double>	set_mapdata(std::string dataname, std::string data_line)
{
	std::map<int, double> valuedata;

	std::ifstream datafile(dataname);
	if (!datafile)
		exit(error_return("Error: can't open data.csv\n"));
	while (std::getline(datafile, data_line))
	{
		if (data_line == "date,exchange_rate")
			continue;
		try
		{
			int tempday = get_date(data_line);
			double tempvalue = get_value(data_line);
			if (tempvalue < 0)
				throw std::runtime_error("The value should not be minus");
			valuedata.insert(std::pair<int, double>(tempday, tempvalue));
		}
		catch(const std::exception& e)
		{
			std::cout << "Error in csv: " << e.what() << '\n';
			exit(1);
		}
	}
	return (valuedata);
}

double	get_value(std::string data_line)
{
	double	newvalue;

	data_line.erase(0, data_line.find(',') + 1);
	if (data_line.size() == 0)
		throw std::runtime_error("no data.");
	check_num(data_line);
	newvalue = std::atof(data_line.c_str());
	return (newvalue);
}

//iterator.second -> the second element of map data
double	find_value(int day, std::map<int, double> valuedata)
{
	std::map<int, double>::iterator ite = valuedata.find(day);
	if (ite != valuedata.end())
		return ((*ite).second);
	ite = valuedata.upper_bound(day);
	if (ite == valuedata.begin())
		throw std::runtime_error("The date is older than data");
	return ((*--ite).second);
}
