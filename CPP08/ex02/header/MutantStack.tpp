
template <class T, class Container >
MutantStack<T, Container>::MutantStack(): std::stack<T, Container>()
{
	colornote( PRINT, 3, "MutantStack constructor called", "");
}

template <class T, class Container >
MutantStack<T, Container>::~MutantStack()
{
	colornote( PRINT, 3, "MutantStack destructor called", "");
}

template <class T, class Container >
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& source)
{
	if (*this == source)
		return (*this);
	colornote( PRINT, 3, "MutantStack copy argument called", "");
	std::stack<T, Container>::c = source.std::stack<T, Container>::c;
	return (*this);
}

template <class T, class Container >
MutantStack<T, Container>::MutantStack(const MutantStack& source): std::stack<T, Container>()
{
	colornote( PRINT, 3, "MutantStack copy constructor called", "");
	*this = source;
}


template <class T, class Container >
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return (std::stack<T, Container>::c.begin());	// "c" is member attribute of stack (and indicate the base container)
}

template <class T, class Container >
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
{
	return (std::stack<T, Container>::c.end());
}
