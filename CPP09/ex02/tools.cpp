#include "header/tools.hpp"
#include "header/colors.hpp"

int	error_return(std::string text)
{
	std::cout << text << std::endl;
	return (1);
}

bool	check_num(std::string num)
{
	for (size_t pos = 0; pos < num.size(); pos++)
	{
		if (!std::isdigit(num[pos]))
			return (0);
	}
	return (1);
}

void	swap_list_int(std::list<int>::iterator it_a, std::list<int>::iterator it_b)
{
	int	temp;

	temp = *it_a;
	*it_a = *it_b;
	*it_b = temp;
}

std::list<int>::iterator	next_it_list(std::list<int>::iterator it)
{
	std::list<int>::iterator it_temp = it;
	return (++it_temp);
}

std::list<int>::iterator	prev_it_list(std::list<int>::iterator it)
{
	std::list<int>::iterator it_temp = it;
	return (--it_temp);
}

std::list<int>::iterator	move_it_list(std::list<int>::iterator it, int len)
{
	int i = 0;

	while (i < len)
	{
		it++;
		i++;
	}
	return (it);
}

std::vector<int>::iterator	next_it_vector(std::vector<int>::iterator it)
{
	std::vector<int>::iterator it_temp = it;
	return (++it_temp);
}

std::vector<int>::iterator	prev_it_vector(std::vector<int>::iterator it)
{
	std::vector<int>::iterator it_temp = it;
	return (--it_temp);
}

std::vector<int>::iterator	move_it_vector(std::vector<int>::iterator it, int len)
{
	int i = 0;

	while (i < len)
	{
		it++;
		i++;
	}
	return (it);
}

void	print_list_withtag(int i, std::string text, std::list<int> list)
{
	std::list<int>::iterator it;

	colornote(1, i, text, "\n");
	for (it = list.begin(); it != list.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	print_vector_withtag(int i, std::string text, std::vector<int> vect)
{
	std::vector<int>::iterator it;

	colornote(1, i, text, "\n");
	for (it = vect.begin(); it != vect.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	print_list_to_file(std::string filename, std::list<int> list)
{
	std::ofstream 				of(filename);
	std::list<int>::iterator	it;

	if (!of)
		std::cout << "Can't open file" << std::endl;
	
	for (it = list.begin(); it != list.end(); it++)
		of << *it << " ";
	of << std::endl;
}

void	print_vector_to_file(std::string filename, std::vector<int> vect)
{
	std::ofstream 	of(filename);
	int	pos = (int)vect.size();

	if (!of)
		std::cout << "Can't open file" << std::endl;
	
	for (int i = 0; i < pos ; i++)
		of << vect[i] << " ";
	of << std::endl;
}

void	print_list(std::list<int>::iterator it_top, std::list<int>::iterator it_end)
{
	while (it_top != it_end)
		std::cout << *it_top++ <<  ' ';
	std::cout << std::endl;
}

void	print_vector(std::vector<int> myvector, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << myvector[i] << " ";
	std::cout << std::endl;
}
