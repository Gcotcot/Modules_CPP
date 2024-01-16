#ifndef whatever_HPP
# define whatever_HPP

# include <iostream>

template <typename T>

void	swap(T &a, T &b)
{
	const T	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a > b)
		return b;
	else
		return a;
}

#endif
