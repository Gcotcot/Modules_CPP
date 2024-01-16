#ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span {

	private :
		unsigned int		size;
		unsigned int		store;
		std::vector<int>	vect;
		
	public :
		Span(void);
		Span(unsigned int N);
		Span(const Span &ref);
		Span &operator = (const Span &ref);
		~Span(void);
		std::vector<int>	getVect(void) const {return (this->vect);};
		unsigned int		getSize(void) const {return (this->size);};
		unsigned int		getStore(void) const {return (this->store);};
		void			addNumber(int n);
		int			shortestSpan(void);
		int			longestSpan(void);
		class outOfSize : public std::exception {
			virtual const char *what() const throw();
		};
		class insufisant : public std::exception {
			virtual const char *what() const throw();
		};
};

#endif
