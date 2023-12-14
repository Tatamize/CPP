#ifndef SORTLIST_H
# define SORTLIST_H
# include <iostream>
# include <list>

class	SortList
{
	public:
		SortList();
		~SortList();
		SortList& operator=(const SortList& src);
		SortList(const SortList &src);
		SortList(std::list<int> mylist);
	
		void	Insert_Merge_Sort(int top, int len);
		void	InsertSort(int top, int len);
		void	MergeSort(std::list<int>::iterator it_top, std::list<int>::iterator it_mid, std::list<int>::iterator it_end);	
		void	PrintList();
		void	ShowList();
		
	private:
		int				_switchpoint;	// the number to switch from insert sort to merge sort
		int				_size;
		std::list<int>	_sorted;
};

#endif
