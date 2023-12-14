#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
# include "colors.h"

template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array& operator=(const Array& source);
		Array(const Array& source);
		T& operator[](int i);
		Array(unsigned int n);

		int		size() const;
		void	printArray();	// additional function
		// class oversizeException : public std::string		// we can use original exception but not neccessary 
		// {
		// 		const char*	what();
		// };
	
	private:
		T				*_array;
		unsigned int	_a_size;
};

# include "Array.tpp"
#endif
