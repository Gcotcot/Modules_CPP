#ifndef PmergeMe_HPP
# define PmergeMe_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm> 
# include <ctime>
# include <stdlib.h>

class	PmergeMe {
	private :
		PmergeMe(const PmergeMe &ref);
		PmergeMe &operator = (const PmergeMe &ref);
		std::vector<int>	vect;
		std::list<int>	deck;

	public :
		PmergeMe(void);
		~PmergeMe(void);
		void	add_value(int value);
		void	aff_vect(void);
		void	aff_list(void);
		
		std::vector<int>	merge_vect(std::vector<int> ref);
		std::vector<int>	insertion_vector(std::vector<int> ref);
		std::list<int>	merge_list(std::list<int> ref);
		std::list<int>	insertion_list(std::list<int> ref);
};

#endif
