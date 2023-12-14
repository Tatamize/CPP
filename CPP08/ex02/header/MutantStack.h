#ifndef MUTANTSTACK_H
# define  MUTANTSTACK_H
# include <iostream>
# include <algorithm>
# include <deque>
# include <stack>
# include <vector>
# include <list>
# include <iterator>
# include "colors.h"

template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack();
		virtual ~MutantStack();
		MutantStack& operator=(const MutantStack& source);
		MutantStack(const MutantStack& source);

		typedef typename std::stack<T, Container>::container_type::iterator iterator;

		iterator begin(); 
		iterator end();

	private:

};

# include "MutantStack.tpp"
#endif