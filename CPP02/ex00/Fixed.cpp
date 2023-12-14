#include "header/main.h"

Fixed::Fixed(void): FixedPointNum(0)
{
	colornote(2, "Default constructor called", "");
}

Fixed::~Fixed(void)
{
	colornote(2, "Destructor called", "");
}

Fixed& Fixed::operator=(const Fixed &source)
{
	colornote(2, "Copy assignment operator called", "");
    FixedPointNum = source.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &source)
{
	colornote(2, "Copy constructor called", "");
    *this = source;
}

int Fixed::getRawBits(void) const
{
	colornote(2, "getRawBits member function called", "");
    return (FixedPointNum);
}

void    Fixed::setRawBits(int const raw)
{
    FixedPointNum = raw;
}
