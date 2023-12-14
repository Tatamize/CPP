#include "header/PmergeMe.hpp"
#include "header/SortList.hpp"
#include "header/tools.hpp"
#include "header/colors.hpp"
#include <fstream>

SortList::SortList(): _switchpoint(SWITCHPOINT), _size(0)
{
	exit(error_return("Use construction with argument\n"));
}

SortList::~SortList()
{
	
}

SortList& SortList::operator=(const SortList& src)
{
	_switchpoint = src._switchpoint;
	_size= src._size;
	_sorted = src._sorted;
	return (*this);
}

SortList::SortList(const SortList &src)
{
	*this = src;
}

SortList::SortList(std::list<int> mylist): _switchpoint(SWITCHPOINT)
{
	_size = mylist.size();
	_sorted = mylist;
	Insert_Merge_Sort(0, _size);
}

void	SortList::Insert_Merge_Sort(int top, int len)
{
	std::list<int>::iterator it_top;
	std::list<int>::iterator it_end;
	std::list<int>::iterator it_mid;

	if (len <= _switchpoint)
	{
		InsertSort(top, len);
		return ;
	}
	else
	{
		int	mid = len / 2;
		Insert_Merge_Sort(top, mid);
		Insert_Merge_Sort(top + mid, len - mid);	
		it_top = move_it_list(_sorted.begin(), top);
		it_end = move_it_list(it_top, len);
		it_mid = move_it_list(it_top, mid);
		MergeSort(it_top, it_mid, it_end);
	}
	return ;	
}

// Sort _sorted with insertion sort from "top(th)" position for len size
void	SortList::InsertSort(int top, int len)
{
	std::list<int>::iterator	it_top = move_it_list(_sorted.begin(), top);
	std::list<int>::iterator	it_check = it_top;
	std::list<int>::iterator	it_end = move_it_list(it_top, len);
	std::list<int>::iterator	it_insert;

	it_check++;
	while (it_check != it_end)
	{
		it_insert = it_check;
		it_insert--;
		while (*it_insert >= *next_it_list(it_insert))
		{
			swap_list_int(it_insert, next_it_list(it_insert));
			if (it_insert == it_top)
				break;
			it_insert--;
		}		
		it_check++;
	}
}

void	SortList::MergeSort(std::list<int>::iterator it_top, std::list<int>::iterator it_mid, std::list<int>::iterator it_end)
{
	std::list<int>::iterator it_check = it_mid;
	std::list<int>::iterator it_insert = it_top;
	
	while (it_check != it_end)
	{
		if (*it_insert < *it_check)
			it_insert++;
		else
		{
			if (it_insert == it_check)
				it_check++;
			else
			{
				if (it_insert == it_top)
				{
					_sorted.insert(it_insert, *it_check);
					it_top--;
					it_insert--;
				}
				else
					_sorted.insert(it_insert, *it_check);
				it_check = _sorted.erase(it_check);	
			}
		}
	}

}


void	SortList::PrintList()
{
	print_list_to_file("result_list", _sorted);
}

void	SortList::ShowList()
{
	print_list_withtag(3, "After: _mylist", _sorted);
}
