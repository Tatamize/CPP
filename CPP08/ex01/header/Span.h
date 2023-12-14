#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <vector>

class Span
{
	public:
		Span(unsigned int N);
		~Span();
		Span& operator=(const Span& source);
		Span(const Span& source);

		void addNumber(int i);
		void printAll() const;		//additional function to print all int

		int	shortestSpan() const;
		int longestSpan() const;

		class	oversizeException : public std::exception
		{
			public:
			const char* what() const _NOEXCEPT;
		};
		class	nospanException : public std::exception
		{
			public:
			const char* what() const _NOEXCEPT;
		};

	private:
		std::vector<int>	_nums;
		unsigned int	_maxN;
};

#endif