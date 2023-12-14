template <typename T>
Array<T>::Array()
{
	_array = new T[0];
	_a_size = 0;
	colornote(PRINT, 3, "Array default constructor called", "");
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	colornote(PRINT, 3, "Array desstructor called", "");
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& source)
{
	_a_size = source._a_size;
	_array = new T[_a_size];
	for (unsigned int i = 0; i < _a_size; i++)
		_array[i] = source._array[i];
	return (*this);
}

template <typename T>
Array<T>::Array(const Array& source)
{
	*this = source;
	colornote(PRINT, 3, "Array copy constructor called", "");
}

template <typename T>
T& Array<T>::operator[](int i)
{
	if (i < 0 || (i >= (int)_a_size && i != 0))
		throw std::exception();		// The subject says "std::exception is thrown"... but making oririnal exception is better?? 
	return (_array[i]);
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_a_size = n;
	colornote(PRINT, 3, "Array with n constructor called", "");
}

template <typename T>
int	Array<T>::size() const
{
	return (_a_size);
}

template <typename T>
void	Array<T>::printArray()
{
	std::cout << std::endl;
	for (unsigned int i = 0; i < _a_size; i++)
	{
		std::cout << _array[i] << std::endl;
	}
	std::cout << std::endl;
}
