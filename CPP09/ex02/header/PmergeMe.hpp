#ifndef PMERGEME_H
# define PMERGEME_H
# include <list>
# include <vector>

class	PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& src);
		PmergeMe(const PmergeMe &src);
		PmergeMe(int argc, char **argv);

		void	MakeDatas(int argc, char **argv);

	private:
		std::list<int>		_mylist;
		std::vector<int>	_myvector;
};

#endif
