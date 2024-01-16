#ifndef BitcoinExchange_HPP
# define BitcoinExchange_HPP

# include <iostream>
# include <algorithm>
# include <map>
# include <fstream>
# include <string>
# include <sstream>

class	BitcoinExchange {

	private :
		BitcoinExchange &operator = (const BitcoinExchange &ref);
		BitcoinExchange(const BitcoinExchange &ref);
		std::map<std::string, float>	calend;
		std::map<std::string, float>    request;

	public :
		BitcoinExchange(void);
		~BitcoinExchange(void);
		void	open_file(std::string filename);
		void    open_cal(void);
		std::map<std::string, float>::iterator    preced(std::string date);
};

#endif
