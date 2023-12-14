#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed& operator=(const Fixed &source);
		Fixed(const Fixed &source);

		// Override constructer for the case with parametor(s).
		Fixed(const int i);
		Fixed(const float f);

		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					FixedPointNum;
		static const int	FractionalBitsNum = 8;

};

// Override "<<" operator to print Fixed class(to show float number).
std::ostream& operator<<(std::ostream &os, const Fixed &fp);

#endif