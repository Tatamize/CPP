#ifndef SORTVECTOR_H
# define SORTVECTOR_H
# include <iostream>
# include <vector>

class	SortVector
{
	public:
		SortVector();
		~SortVector();
		SortVector& operator=(const SortVector& src);
		SortVector(const SortVector &src);
		SortVector(std::vector<int> myvector);	

		void	Insert_Merge_Sort(int pos_top, int len);
		void	InsertSort(int pos_top, int len);
		void	MergeSort(int pos_top_left, int pos_top_right, int len);
		void	SwapValue(int a, int b);	
		void	PrintVector();
		void	ShowVector();
		
	private:
		int					_switchpoint;
		int					_size;
		std::vector<int>	_sorted;

};

#endif
