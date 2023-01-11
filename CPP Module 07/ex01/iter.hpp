
# ifndef _ITER_HPP_
# define _ITER_HPP_
# include <iostream>

template<typename T>
void write(T& a, T x)
{
	T x;
	std::cin >> x;
	a = x;
}

template<typename T>
void read(T& a)
{
	std::cout << a << std::endl;
}

template<typename T>
void	iter(T* tab, size_t sizeTab, void (func)(T&))
{
	for (size_t i = 0; i < sizeTab; i++)
		(func)(tab[i]);
}

#endif
