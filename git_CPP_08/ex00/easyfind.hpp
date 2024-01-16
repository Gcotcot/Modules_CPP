#ifndef easyfind_HPP
# define easyfind_HPP

# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &t, int ref)
{
	typename T::iterator it = t.begin();
	typename T::iterator ite = t.end();

	return (std::find(it, ite, ref));
}

#endif
