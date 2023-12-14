#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed(void);							// default constructor
		~Fixed(void);							// destructor
		Fixed& operator=(const Fixed &source);	// copy assignment
		Fixed(const Fixed &source); 			// copy constructor

		int 	getRawBits(void) const;			// "const" after function name means, this menber function can't change the member variable
		void 	setRawBits(int const raw);

	private:
		int					FixedPointNum;
		static const int	FractionalBitsNum = 8;

};

#endif