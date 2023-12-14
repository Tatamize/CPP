#include "header/main.h"

int	main(void)
{
	{
		colornote(3, "Basic test from subject sheet", "");
		Fixed a;
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << std::endl;
	}
	{
		colornote(3, "Test for other operators", "");
		Fixed c(-10.5f);
		Fixed const d(0.3f);
		Fixed const e(0.3f);

		std::cout << "c, d is " << c << " , " << d << std::endl;
		std::cout << "c, d getRawBits is " << c.getRawBits() << " , " << d.getRawBits() << std::endl;
		std::cout << "c * d is " << c * d << std::endl;
		std::cout << "c / d is " << c / d << std::endl;
		std::cout << "c - d is " << c - d << std::endl;
		std::cout << "c + d is " << c + d << std::endl;
		std::cout << "c > d is " << (c > d) << std::endl;
		std::cout << "c < d is " << (c < d) << std::endl;
		std::cout << "c >= d is " << (c >= d) << std::endl;
		std::cout << "c <= d is " << (c <= d) << std::endl;
		std::cout << "c == d is " << (c == d) << std::endl;
		std::cout << "c != d is " << (c != d) << std::endl;
		std::cout << "c++ " << c++ << std::endl;
		std::cout << "c " << c << std::endl;
		std::cout << "++c " << ++c << std::endl;
		std::cout << "c " << c << std::endl;
		std::cout << "min(c, d) is " << Fixed::min( c, d ) << std::endl;
		std::cout << std::endl;
		
		colornote(3, "Test with same values", "");
		std::cout << "d == e is " << (d == e) << std::endl;
		std::cout << "d != e is " << (d != e) << std::endl;
		std::cout << "min(d, e) is " << Fixed::min( d, e ) << std::endl;
	}
	return (0);
}

// int	main()
// {
// 	Fixed a;
// 	Fixed const b( 10); 
// 	Fixed const c( 42.42f ); 
// 	Fixed const d( b );
// 	Fixed const e( 0.5f );

// 	a = Fixed( 0 );

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "e is " << e << std::endl;

// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "a > b is " << (a > b) << std::endl;
// 	std::cout << "a < b is " << (a < b) << std::endl;
// 	std::cout << "a >= b is " << (a >= b) << std::endl;
// 	std::cout << "a <= b is " << (a <= b) << std::endl;
// 	if (b > c)
// 		std::cout << "b > c is true " << std::endl;
// 	else
// 		std::cout << "b > c is NOT true " << std::endl;
	
// 	std::cout << std::endl;
// 	std::cout << "a + b is " << a + b << std::endl;
// 	std::cout << "a + e is " << a + e << std::endl;
// 	std::cout << "a - b is " << a - b << std::endl;
// 	std::cout << "a - e is " << a - e << std::endl;
// 	std::cout << "a * b is " << a * b << std::endl;
// 	std::cout << "a * e is " << a * e << std::endl;
// 	std::cout << "a / b is " << a / b << std::endl;
// 	std::cout << "a / e is " << a / e << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "++a is " << ++a << std::endl;
// 	std::cout << "a++ is " << a++ << std::endl;
// 	std::cout << "a is " << a << std::endl;

// 	Fixed const bb( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << bb << std::endl;

// 	std::cout << b << " " << c << " b and c , which is smaller? " << Fixed::min(b, c) << std::endl;

// 	return (0);
// }

// int	main()
// {
// 	Fixed a(1234.4321f);
// 	Fixed b(11.0f);
// 	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	// std::cout << a << std::endl;
// 	// std::cout << ++a << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << a++ << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << b << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a / b << std::endl;
// 	return (0);
// }
