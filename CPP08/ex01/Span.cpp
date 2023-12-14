#include <ctime>
#include <numeric>
#include <algorithm>
#include "header/Span.h"
#include "header/colors.h"

Span::Span(unsigned int N)
{
	_maxN = N;
	colornote( PRINT, 3, "Span constructor called", "");
}

Span::~Span()
{
	colornote( PRINT, 3, "Span destructor called", "");
}

Span& Span::operator=(const Span& source)
{
	_nums = source._nums;
	_maxN = source._maxN;
	return (*this);
}

Span::Span(const Span& source)
{
	colornote( PRINT, 3, "Span constructor(with copy argument) called", "");
	*this = source;
}

void Span::addNumber(int i)
{
	if (_nums.size() < _maxN)
		_nums.push_back(i);
	else
		throw oversizeException();
}

void Span::printAll() const
{
	std::cout << "--- print all start ---" << std::endl;
	for (unsigned int i = 0; i < _nums.size(); i++)
		std::cout << _nums[i] << std::endl;
	std::cout << "--- print all done ---" << std::endl;
}

int	Span::shortestSpan() const
{
	if (_nums.size() < 2)
		throw nospanException();
	std::vector<int> newnums = _nums;
	std::sort(newnums.begin(), newnums.end());
	std::adjacent_difference(newnums.begin(), newnums.end(), newnums.begin());
	return (*min_element(++(newnums.begin()), newnums.end()));
}

int	Span::longestSpan() const
{
	if (_nums.size() < 2)
		throw nospanException();
	std::vector<int> newnums = _nums;
	std::sort(newnums.begin(), newnums.end());
	return (newnums.back() - newnums.front());
}

const char*  Span::oversizeException::what() const _NOEXCEPT
{
	return ("Too much adding");
}

const char*  Span::nospanException::what() const _NOEXCEPT
{
	return ("Not enough numbers to check span");
}