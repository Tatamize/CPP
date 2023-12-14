#include "header/PmergeMe.hpp"
#include "header/SortList.hpp"
#include "header/SortVector.hpp"
#include "header/tools.hpp"
#include "header/colors.hpp"

PmergeMe::PmergeMe()
{
	exit(error_return("Use construction with 2 arguments\n"));
}

PmergeMe::~PmergeMe()
{
	
}

PmergeMe& PmergeMe::operator=(const PmergeMe& src)
{
	_mylist = src._mylist;
	_myvector = src._myvector;
	return (*this);
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	std::list<int>	samplelist;
	clock_t			start, end;
	clock_t			start_l, end_l;
	clock_t			start_v, end_v;
	double duration;
	double duration_mylist;
	double duration_myvect;

	MakeDatas(argc, argv);
	print_list_withtag(3, "Before: _mylist", _mylist);
	print_vector_withtag(3, "Before: _myvector", _myvector);

	// (sample) this is for the sample list (to compare with the result by public member function)
	for (size_t i = 1; i < (size_t)argc; i++)
	{
		std::string num = argv[i];
		if (!check_num(num))
			exit (error_return("Error: Each argument must be a positive number"));
		samplelist.push_back(std::atoi(argv[i]));
	}

	// (sample) public member function
	start = clock();
	samplelist.sort();
	end = clock();
	duration = double(end - start) / double(CLOCKS_PER_SEC) * 1000;

	// my sort class for list
	start_l = clock();
	SortList mysort_list(_mylist);
	end_l = clock();
	duration_mylist = double(end_l - start_l) / double(CLOCKS_PER_SEC) * 1000;
	
	// my sort class for vector
	start_v = clock();
	SortVector mysort_vect(_myvector);
	end_v = clock();
	duration_myvect = double(end_v - start_v) / double(CLOCKS_PER_SEC) * 1000;

	mysort_list.ShowList();
	mysort_vect.ShowVector();

	std::cout << std::endl;
	colornote(1, 2, "(REF)Time to process with default sort func(list) : ", "\n");
	std::cout << samplelist.size() << " elements(list) list sort(default) : " << duration <<  " ms" << std::endl;
	std::cout << std::endl;
	colornote(1, 2, "Time to process : ", "\n");
	std::cout  << "Time for my list sort : " << duration_mylist <<  " ms, compared rate is " << duration_mylist / duration << std::endl;
	colornote(1, 2, "Time to process : ", "\n");
	std::cout  << "Time for my vector sort : " << duration_myvect <<  " ms, compared rate is " << duration_myvect / duration << std::endl;
	std::cout << std::endl;

	// to check the result, print the sorted samplelist to "result_default" file
	print_list_to_file("result_default", samplelist);
	// to check the result, print the sorted list to "result_list" file
	// to check the result, print the sorted vectir to "result_vector" file
	mysort_list.PrintList();
	mysort_vect.PrintVector();

	system("diff result_default result_list");
	system("diff result_default result_vector");

}

void	PmergeMe::MakeDatas(int argc, char **argv)
{
	for (size_t i = 1; i < (size_t)argc; i++)
	{
		std::string num = argv[i];
		if (!check_num(num))
			exit (error_return("Error: Each argument must be a positive number"));
		_mylist.push_back(std::atoi(argv[i]));
		_myvector.push_back(std::atoi(argv[i]));
	}
}