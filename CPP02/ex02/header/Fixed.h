#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed& operator=(const Fixed &source);
		Fixed(const Fixed &source);

		Fixed(const int i);
		Fixed(const float f);

		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		//for ex02 new operators
		bool operator>(const Fixed& r) const;
		bool operator<(const Fixed& r) const;
		bool operator>=(const Fixed& r) const;
		bool operator<=(const Fixed& r) const;
		bool operator==(const Fixed& r) const;
		bool operator!=(const Fixed& r) const;

		const Fixed operator+(const Fixed& r) const;
		const Fixed operator-(const Fixed& r) const;
		const Fixed operator*(const Fixed& r) const;
		const Fixed operator/(const Fixed& r) const;

		Fixed&	operator++();			// ++i
		const Fixed	operator++(int);	// i++
		Fixed&	operator--();
		const Fixed	operator--(int);

		static const Fixed&	min(Fixed const &r, Fixed const &l);	//with static, we can call this function without object
		static const Fixed&	max(const Fixed &r, const Fixed &l);

	private:
		int					FixedPointNum;
		static const int	FractionalBitsNum = 8;

};

// Override "<<" operator to print Fixed class(to show float number).
std::ostream& operator<<(std::ostream &os, const Fixed &fp);

#endif