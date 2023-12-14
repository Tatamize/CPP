#ifndef BASE_H
# define BASE_H

class Base
{
	public:
		virtual	~Base();
};

class	A: public Base
{
	public:
		virtual	~A();
};

class	B: public Base
{
	public:
		virtual	~B();
};

class	C: public Base
{
	public:
		virtual	~C();
};

#endif