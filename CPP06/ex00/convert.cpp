#include "header/convert.h"

Convert::Convert(char *str): _str(static_cast<std::string>(str)), _type(0), _c('\0'), _i(0), _f(0), _d(0)
{
	getType(_str);
	convertOriginal(str);
	convert_C();
	convert_I();
	convert_F();
	convert_D();
	printAll();
	colornote(PRINT, 3, "Convert is constructed", "");
}

Convert::~Convert()
{
	colornote(PRINT, 3, "Convert is destructed", "");
}


Convert& Convert::operator=(const Convert& source)
{
	_str = source._str;
	_type = source._type;
	_c = source._c;
	_i = source._i;
	_f = source._f;
	_d = source._d;
	return (*this);
}

Convert::Convert(const Convert &source)
{
	*this = source;
	colornote( PRINT, 3, "Convert constructor called", "");
}

const std::string Convert::typelist[] = {"notsure", "CHAR", "INT", "FLOAT", "DOUBLE"};

void	Convert::getType(std::string str)
{
	if (str == "." || str == ".f" || (str[0] == '-' && str[1] == '.') || str == "")
		throw(Convert::notValidStringException());
if ( str.length() == 1 )
	{
		_type = CHAR;
		if (isdigit(static_cast<char>(str[0])))
			_type = INT;
	}
	else if (str == "nanf" || str == "+inff" || str == "-inff")
		_type = FLOAT;
	else if (str == "nan" || str == "+inf" || str == "-inf")
		_type = DOUBLE;
	else
	{
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] == '-')
				continue;
			if (str[i] == '.')
			{
				if (_type == DOUBLE)
					throw(Convert::notValidStringException());		
				_type = DOUBLE;
			}
			else if (str[i] == 'f')
			{
				if (str[i + 1] != '\0' || _type == FLOAT || _type != DOUBLE)
					throw(Convert::notValidStringException());
				_type = FLOAT;
			}	
			else if (!isdigit(str[i]))
				throw(Convert::notValidStringException());
		}
		if (_type != FLOAT && _type != DOUBLE)
		{
			
			_type = INT;	
		}
				
	}
	std::cout << "The type is " << typelist[_type] << std::endl;
}

void	Convert::convertOriginal(char *str)
{
	switch(_type)
	{
		case CHAR:
			_c = str[0];
			break;
		case INT:
			if (atol(str) > std::numeric_limits<int>::max() || atol(str) < std::numeric_limits<int>::min())
				throw(Convert::overflowException());
			_i = atoi(str);
			break;
		case FLOAT:
			_f = static_cast<float>(atof(str));
		case DOUBLE:
			_d = atof(str);
	}
}

void	Convert::convert_C()
{
	switch(_type)
	{
		case CHAR:
			break;
		case INT:
			_c = static_cast<char>(_i);
			break;
		case FLOAT:
			_c = static_cast<char>(_f);
			break;
		case DOUBLE:
			_c = static_cast<char>(_d);
			break;
	}
}

void	Convert::convert_I()
{
	switch(_type)
	{
		case CHAR:
			_i = static_cast<int>(_c);
			break;
		case INT:
			break;
		case FLOAT:
			_i = static_cast<int>(_f);
			break;
		case DOUBLE:
			_i = static_cast<int>(_d);
			break;
	}
}

void	Convert::convert_F()
{
	switch(_type)
	{
		case CHAR:
			_f = static_cast<float>(_c);
			break;
		case INT:
			_f = static_cast<float>(_i);
			break;
		case FLOAT:
			break;
		case DOUBLE:
			_f = static_cast<float>(_d);
			break;
	}
}

void	Convert::convert_D()
{
	switch(_type)
	{
		case CHAR:
			_d = static_cast<double>(_c);
			break;
		case INT:
			_d = static_cast<double>(_i);
			break;
		case FLOAT:
			_d = static_cast<double>(_f);
			break;
		case DOUBLE:
			break;
	}
}

void	Convert::printAll()
{
	std::cout.precision(std::numeric_limits<double>::digits10 + 1); // to show more digits for double and float
	//print CHAR
	if (_c == '\0' && (_type == 3 || _type == 4))
		std::cout << "char: impossible" << std::endl;
	else if (_c == '\0' || _c < 32 || _c > 126 || _i < 32 || _i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << _c << "\'" << std::endl;
	//print INT
	if (_str == "nanf" || _str == "+inff" || _str == "-inff" || _str == "nan" || _str == "+inf" || _str == "-inf")
		std::cout << "int: impossible" << std::endl;
	else if (_f > std::numeric_limits<int>::max() || _f < std::numeric_limits<int>::min() || _d > std::numeric_limits<int>::max() || _d < std::numeric_limits<int>::min())
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	//print FLOAT
	if (_f == 0 || _type == INT || (_f == (float)static_cast<long long>(_f)) )
		std::cout << "float: " << _f << ".0f" << std::endl;
	else
		std::cout << "float: " << _f << "f" << std::endl;
	//print DOUBLE
	if (_d == 0 || _type == INT || (_d == (double)static_cast<long long>(_d)))
		std::cout << "double: " << _d << ".0" << std::endl;
	else
		std::cout << "double: " << _d << std::endl;
}

const char*	Convert::notValidStringException::what() const _NOEXCEPT
{
	return ("The string is not valid");
}

const char*	Convert::overflowException::what() const _NOEXCEPT
{
	return ("The number is overflow int");
}