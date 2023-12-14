#ifndef DATA_H
# define DATA_H

struct	Data
{
	public:
	int		_i;
	int		_i2;
	char	_c;

	void	hello();	// this function print "hello"
};

struct	DataB			// additional thing (not required by subject)
{
	public:
	int		_fake_i; 	// to check the data corruption
	int		_i;
	int		_i2;
	char	_c;

	void	hello();	// this function print "bonjour"
};
#endif