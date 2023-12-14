#ifndef MIN_H
# define MIN_H
# include <iostream>

template <typename T>
T	min(T &a, T &b)
{
	return ((a < b) ? a : b);
}

template <>
std::string	min(std::string &a, std::string &b)
{
	int i = a.std::string::compare(b);
	if (i >= 0)
		return (b);
	else
		return (a);
}

#endif