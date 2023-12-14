#ifndef FUNCS_H
# define FUNCS_H
# include <iostream>

template <typename T>
void	to_print(T const &type)
{
	std::cout << type << std::endl;
}

template <typename T>
void	to_print_twice(T const &type)
{
	std::cout << type << type << std::endl;
}


// I tried once to make some functions but these code below is not suitable for this case, 
// because the subject says "Your iter function template must work with any type of array."
// It means, overlord template depends on the type is difficult (because we have to check wity all the type).
// the function should be simple, limited. (for example to print, to print changed value)

// template <typename T>
// void	increase_i(T &type)
// {
// 	type = ++type;
// }

// template <>
// void	increase_i(std::string &s)
// {
// 	for (int i = 0 ; i < (int)s.length(); i++)
// 	{
// 		s[i] =  (char)s[i] + 1;
// 	}
// }

// template <typename T>
// void	print_item(T &type)
// {
// 	std::cout << type << std::endl;
// }

// void	char_toCapital(char &c)
// {
// 	c = toupper(c);
// }

// void	string_toCapital(std::string &s)
// {
// 	for (int i = 0 ; i < (int)s.length(); i++)
// 	{
// 		s[i] =  (char)(toupper((char)s[i]));
// 	}
// }



#endif