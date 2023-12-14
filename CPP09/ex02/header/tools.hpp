#ifndef TOOLS_H
# define TOOLS_H
# include <fstream>
# include <iostream>
# include <list>
# include <vector>
# define SWITCHPOINT 16

int		error_return(std::string text);
bool	check_num(std::string num);
void	swap_list_int(std::list<int>::iterator it_a, std::list<int>::iterator it_b);
std::list<int>::iterator	next_it_list(std::list<int>::iterator it);
std::list<int>::iterator	prev_it_list(std::list<int>::iterator it);
std::list<int>::iterator	move_it_list(std::list<int>::iterator it, int len);
std::vector<int>::iterator	next_it_vector(std::vector<int>::iterator it);
std::vector<int>::iterator	prev_it_vector(std::vector<int>::iterator it);
std::vector<int>::iterator	move_it_vector(std::vector<int>::iterator it, int len);
void	print_list_withtag(int i, std::string text, std::list<int> list);
void	print_vector_withtag(int i, std::string text, std::vector<int> vect);
void	print_list_to_file(std::string filename, std::list<int> list);
void	print_vector_to_file(std::string filename, std::vector<int> vect);
void	print_list(std::list<int>::iterator it_top, std::list<int>::iterator it_end);
void	print_vector(std::vector<int> myvector, int size);
#endif
