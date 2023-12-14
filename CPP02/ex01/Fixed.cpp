#include "header/main.h"

Fixed::Fixed(void): FixedPointNum(0)
{
	colornote(2, "Default constructor called", "");
}

Fixed::~Fixed(void)
{
	colornote(2, "Destructor called", "");
}

Fixed&	Fixed::operator=(const Fixed &source)
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

int	Fixed::getRawBits(void) const
{
	return (FixedPointNum);
}

void	Fixed::setRawBits(int const raw)
{
	FixedPointNum = raw;
}

Fixed::Fixed(const int i)
{
	colornote(2, "Int constructor called", "");
	FixedPointNum = i * (1 << 8);
}

Fixed::Fixed(const float f)
{
	colornote(2, "Float constructor called", "");
	int res = roundf(f * (1 << 8));
	FixedPointNum = res;
}

float	Fixed::toFloat(void) const
{
	float	newfloat;
	newfloat = ((float)FixedPointNum / (1 << 8));
	return (newfloat);
}

int	Fixed::toInt(void) const
{
	return (FixedPointNum / (1 << 8));
}

std::ostream& operator<<(std::ostream &os, const Fixed &fp)
{
	os << fp.toFloat();
	return os;
}
