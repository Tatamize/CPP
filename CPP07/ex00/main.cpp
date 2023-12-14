#include <iostream>
#include "header/colors.h"
#include "header/swap.h"
#include "header/min.h"
#include "header/max.h"

int	main()
{
	colornote(PRINT, 3, "[TEST: subject]", "");
	{
		int	a = 2;
		int	b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);				// memo : for 2 strings swap without "::", it calls another swap!
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl;
	colornote(PRINT, 3, "[TEST: int float char and string]", "");
	{
		int		a = 2;
		int		b = 3;
		float	f1 = 2.5f;
		float	f2 = -5.0f;
		char	c1 = 'p';
		char	c2 = 'c';
		std::string s2 = "baa6";
		std::string s1 = "aaa7";
		
		colornote(PRINT, 3, "swap", "");
		std::cout << "a is " << a << " b is " << b << std::endl;
		::swap(a, b);
		std::cout << "a is " << a << " b is " << b << std::endl;
		std::cout << "f1 is " << f1 << " f2 is " <<f2 << std::endl;
		::swap(f1, f2);
		std::cout << "f1 is " << f1 << " f2 is " <<f2 << std::endl;
		std::cout << "c1 is " << c1 << " c2 is " <<c2 << std::endl;
		::swap(c1, c2);
		std::cout << "c1 is " << c1 << " c2 is " <<c2 << std::endl;
		std::cout << "s1 is " << s1 << " s2 is " <<s2 << std::endl;
		::swap(s1, s2);
		std::cout << "s1 is " << s1 << " s2 is " << s2 << std::endl;

		std::cout << std::endl;
		colornote(PRINT, 3, "min", "");
		std::cout << "min(a, b) is " << ::min(a, b) << std::endl;
		std::cout << "min(f1, f2) is " << ::min(f1, f2) << std::endl;
		std::cout << "min(c1, c2) is " << ::min(c1, c2) << std::endl;
		std::cout << "min(s1, s2) is " << ::min(s1, s2) << std::endl;

		std::cout << std::endl;
		colornote(PRINT, 3, "max", "");
		std::cout << "max(a, b) is " << ::max(a, b) << std::endl;
		std::cout << "max(f1, f2) is " << ::max(f1, f2) << std::endl;
		std::cout << "max(c1, c2) is " << ::max(c1, c2) << std::endl;
		std::cout << "max(s1, s2) is " << ::max(s1, s2) << std::endl;
	}
	return (0);
}


