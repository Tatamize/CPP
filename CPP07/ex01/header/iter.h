#ifndef ITER_H
# define ITER_H


template <typename T>
void	iter(T const *a, unsigned int leng, void (*f)(T const &type))
{
	for(unsigned int i = 0; i < leng; i++)
	{
		f(a[i]);
	}
}

#endif