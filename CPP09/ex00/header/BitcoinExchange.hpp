#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H
# include <iostream>
# include <fstream>
# include <map>

class	BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(std::string filename, std::map<int, double> valuedata);
		BitcoinExchange& operator=(const BitcoinExchange& source);
		BitcoinExchange(const BitcoinExchange& source);
		void	show_day_value(std::string input_line);
	
	private:
		std::map<int, double> _valuedata;
};

#endif
