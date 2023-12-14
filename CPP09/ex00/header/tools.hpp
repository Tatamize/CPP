#ifndef TOOLS_H
# define TOOLS_H
# include <iostream>
# include <map>

int						error_return(std::string text);
int						get_date(std::string data_line);
void					check_num(std::string num);
double					get_value(std::string data_line);
std::map<int, double>	set_mapdata(std::string dataname, std::string data_line);
double					find_value(int day, std::map<int, double> valuedata);

#endif
