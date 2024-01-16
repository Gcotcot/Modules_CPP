#ifndef RNP_HPP
# define RNP_HPP

# include <iostream>
# include <stack>

class	RNP {
	private :
		RNP(const RNP &ref);
		RNP &operator = (const RNP &ref);
		std::stack<int>	stock;

	public :
		RNP(void);
		~RNP(void);
		int	operation(int ope);
		int	getTop(void);
		int	getSize(void);
		void	add_stock(int value);
		void	add(int value1, int value2);
		void	minus(int value1, int value2);
		void	divise(int value1, int value2);
		void	multiply(int value1, int value2);
};

#endif
