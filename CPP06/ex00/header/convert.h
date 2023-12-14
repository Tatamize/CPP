#ifndef CONVERT_H
# define CONVERT_H
# include <iostream>
# include <limits>
# include "colors.h"
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4

class   Convert
{
	public:
	Convert(char *str);
	~Convert();
	Convert& operator=(const Convert& source);
	Convert(const Convert &source);

	void	getType(std::string str);
	void	convertOriginal(char *str);
	void	convert_C();
	void	convert_I();
	void	convert_F();
	void	convert_D();
	void	printAll();
	const static std::string typelist[5];

	class	notValidStringException: public std::exception
	{
		public:
		const char* what() const _NOEXCEPT;
	};
		class	overflowException: public std::exception
	{
		public:
		const char* what() const _NOEXCEPT;
	};

	private:
	std::string _str;
	int         _type;
	char        _c;
	int         _i;
	float       _f;
	double      _d;
};



#endif