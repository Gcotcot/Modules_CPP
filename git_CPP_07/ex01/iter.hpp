#ifndef iter_HPP
# define iter_HPP

# include <iostream>

template <typename T>
void	iter(T *t, unsigned int lenght, void (*f)(T const &ref))
{
	for (unsigned int i = 0; i < lenght; i++)
		f(t[i]);
}

#endif
