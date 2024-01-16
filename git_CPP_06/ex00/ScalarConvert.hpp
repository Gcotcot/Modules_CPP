#ifndef ScalarConvert_HPP
# define ScalarConvert_HPP

# include <iostream>
# include <stdlib.h>

class	ScalarConvert {

	public :
		static void	convert(std::string str);
		/*void 		to_char(std::string str);
		void		to_int(std::string str);
		void 		to_float(std::string str);
		void 		to_double(std::string str);*/
	
	private :
		ScalarConvert(void);
		ScalarConvert(const ScalarConvert &ref);
		ScalarConvert &operator = (const ScalarConvert &ref);
		~ScalarConvert(void);
};

void 	to_char(std::string str);
void	to_int(std::string str);
void 	to_float(std::string str);
void 	to_double(std::string str);

#endif
