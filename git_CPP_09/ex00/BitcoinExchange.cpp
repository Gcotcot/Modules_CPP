#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::~BitcoinExchange(void)
{
}

void    BitcoinExchange::open_file(std::string filename)
{
	std::ifstream	input;
	std::string	line;

	input.open(filename.c_str());
	if (!input.good())
		throw(std::logic_error("Error: could not open file."));
	getline(input,line);
	while (getline(input,line))
	{
		std::string	sub = line.substr(0, 10);
		float	value;
		std::map<std::string, float>::iterator	it;
		if (line.length() < 12)
		{
			it = this->calend.end();
			std::cout << "Error: bad input => " << sub << std::endl;
		}
		else
		{
			value = std::atof(line.substr(12).c_str());
			it = this->preced(sub);
			if (value < 0)
				std::cout << "Error: not a positive number.\n";
			else if (value >  2147483647.0)
				std::cout << "Error: too large a number.\n";
			else if (it == this->calend.end())
				std::cout << "Error: bad input => " << sub << std::endl;
			else
				std::cout << sub << "=> " << value << " = " << it->second * value << std::endl;
		}
	}
	input.close();
}

void    BitcoinExchange::open_cal(void)
{
	std::ifstream	input;
	std::string	line;

	input.open("data.csv");
	if (!input.good())
		throw(std::logic_error("Error: could not open file."));
	getline(input,line);
	while (getline(input,line))
		this->calend.insert(std::pair<std::string, float> (line.substr(0, 10), std::atof (line.substr(11).c_str())));
	input.close();
}

std::string	change_date(std::string date)
{
	int	year = std::atoi(date.substr(0,4).c_str());
	int	month = std::atoi(date.substr(5,2).c_str());
	int	day = std::atoi(date.substr(8,2).c_str());
	day--;
	if (day < 1)
	{
		day = 31;
		month--;
		if (month < 1)
		{
			month = 12;
			year--;
		}
	}
	std::stringstream conv_year;
	std::stringstream conv_month;
	std::stringstream conv_day;
	conv_year << year;
	conv_month << month;
	conv_day << day;
	std::string	new_year;
	std::string	new_month;
	std::string	new_day;
	conv_year >> new_year;
	conv_month >> new_month;
	conv_day >> new_day;
	if (month < 10)
		new_month.insert(0, "0");
	if (day < 10)
		new_day.insert(0, "0");
	date = new_year + "-" + new_month + "-" + new_day;
	return (date);
}

std::map<std::string, float>::iterator	BitcoinExchange::preced(std::string date)
{
	int	year = std::atoi(date.substr(0,4).c_str());
	int	month = std::atoi(date.substr(5,2).c_str());
	int	day = std::atoi(date.substr(8,2).c_str());
	if ((year <= 2009 && month <= 1 && day <= 2) || (day > 31 || month > 12))
		return (this->calend.end());
	std::map<std::string, float>::iterator	it = this->calend.find(date);
	while (it == this->calend.end())
	{
		date = change_date(date);
		year = std::atoi(date.substr(0,4).c_str());
		month = std::atoi(date.substr(5,2).c_str());
		day = std::atoi(date.substr(8,2).c_str());
		if ((year <= 2009 && month <= 1 && day <= 2))
			return (this->calend.end());
		it = this->calend.find(date);
	}
	return it;
}
