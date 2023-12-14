#include "header/PmergeMe.hpp"
#include "header/SortVector.hpp"
#include "header/tools.hpp"
#include "header/colors.hpp"
#include <fstream>

SortVector::SortVector(): _switchpoint(SWITCHPOINT), _size(0)
{
	exit(error_return("Use construction with argument\n"));
}

SortVector::~SortVector()
{
	
}

SortVector& SortVector::operator=(const SortVector& src)
{
	_switchpoint = src._switchpoint;
	_size= src._size;
	_sorted = src._sorted;
	return (*this);
}

SortVector::SortVector(const SortVector &src)
{
	*this = src;
}

SortVector::SortVector(std::vector<int> myvector): _switchpoint(SWITCHPOINT)
{
	_size = myvector.size();
	_sorted = myvector;
	Insert_Merge_Sort(0, _size);
}

void	SortVector::Insert_Merge_Sort(int pos_top, int len)
{
	if (len <= _switchpoint)
	{
		InsertSort(pos_top, len);
		return ;
	}
	else
	{
		int	mid = len / 2;
		int	pos_right = pos_top + mid;
		Insert_Merge_Sort(pos_top, mid);
		Insert_Merge_Sort(pos_right, len - mid);
		MergeSort(pos_top, pos_right, len);
	}
	return ;	
}

// Sort _sorted with insertion-sort from "pos_top(th)" position for len size
void	SortVector::InsertSort(int pos_top, int len)
{
	int	pos_check;
	int	pos_insert;

	len = len + pos_top;
	pos_check = pos_top + 1;
	while (pos_check < len)
	{
		pos_insert = pos_check - 1;
		while (pos_insert >= pos_top && _sorted[pos_insert] > _sorted[pos_insert + 1])
		{
			SwapValue(pos_insert, pos_insert + 1);
			pos_insert--;
		}		
		pos_check++;		
	}
}

// Sort _sorted with merge-sort from "pos_top_left(th)" position for len size, pos_top_right is the top of right array
void	SortVector::MergeSort(int pos_top_left, int pos_top_right, int len)
{
	std::vector<int>::iterator	it_top;
	std::vector<int>::iterator	it_check;
	std::vector<int>::iterator	it_mid;
	std::vector<int>::iterator	it_end;
	int							temp;

	it_top = _sorted.begin();
	for (int i = 0; i < pos_top_left; i++)
		it_top++;
	it_mid = _sorted.begin();
	for (int i = 0; i < pos_top_right; i++)
		it_mid++;
	it_end = it_top;
	for (int i = 0; i < len; i++)
		it_end++;
	it_check = it_top;
	while (it_mid != it_end)
	{
		if (*it_check < *it_mid)
			it_check++;
		else
		{
			temp = *it_mid;
			_sorted.erase(it_mid);
			_sorted.insert(it_check, temp);
			it_mid++;
			if (--it_check != it_top)
				it_check++;
		}
	}

}

void	SortVector::SwapValue(int a, int b)
{
	int	temp;

	temp = _sorted[a];
	_sorted[a] = _sorted[b];
	_sorted[b] = temp;
}

void	SortVector::PrintVector()
{
	print_vector_to_file("result_vector", _sorted);
}

void	SortVector::ShowVector()
{
	print_vector_withtag(3, "After: _myvector", _sorted);
}