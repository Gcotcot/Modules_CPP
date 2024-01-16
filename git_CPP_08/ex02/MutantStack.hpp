#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template <class T>
class	MutantStack : public std::stack<T> {

	public :
		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack &ref) : std::stack<T>(ref) {*this = ref;};
		MutantStack &operator = (const MutantStack &ref) {*this = ref; return (*this);};
		~MutantStack(void) {};
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin(void) {return(std::stack<T>::c.begin());};
		iterator	end(void) {return(std::stack<T>::c.end());};
};

#endif
