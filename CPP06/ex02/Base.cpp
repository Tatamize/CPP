#include <iostream>
#include "header/colors.h"
#include "header/Base.h"


Base::~Base()
{
	colornote( PRINT, 3, "Base destructor called", "");
}


A::~A()
{
	colornote( PRINT, 3, " A destructor called", "");
}


B::~B()
{
	colornote( PRINT, 3, " B destructor called", "");
}


C::~C()
{
	colornote( PRINT, 3, " C destructor called", "");
}