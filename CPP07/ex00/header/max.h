#ifndef MAX_H
# define MAX_H
# include <iostream>

template <typename T>
T	max(T &a, T &b)
{
	return ((a > b) ? a : b);
}

template <>
std::string	max(std::string &a, std::string &b)
{
	int i = a.std::string::compare(b);
	if (i > 0)
		return (a);
	else
		return (b);
}

#endif