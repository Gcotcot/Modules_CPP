#include "ScalarConvert.hpp"

void	ScalarConvert::convert(std::string str)
{
	to_char(str);
	to_int(str);
	to_float(str);
	to_double(str);
}

void	to_char(std::string str)
{
	std::cout << "char : ";
	int	i;

	i = atoi(str.c_str());
	if (str.length() > 1)
	{
		i = atoi(str.c_str());
		if (str == "nan" || str == "-inf" || str == "+inf")
		{
			std::cout << "Impossible\n";
			return ;
		}
		if (i < 0 || i > 127)
		{
			std::cout << "Impossible\n";
			return ;
		}
		if ((i >= 32 && i <= 126) || (i >= 7 && i <= 13))
			std::cout << "' " << static_cast<char>(i) << " '" << std::endl;
		else
			std::cout << "Non displayable\n";
		return ;
	}
	if (i < 0 || i > 127)
	{
		std::cout << "Impossible\n";
		return ;
	}
	if ((i >= 32 && i <= 126) || (i >= 7 && i <= 13))
		std::cout << "' " << static_cast<char>(i) << " '" << std::endl;
	else
		std::cout << "Non displayable\n";
}

void	to_int(std::string str)
{
	std::cout << "int : ";
	int	i;

	if (str.length() > 1)
	{
		i = atoi(str.c_str());
		if (str[0] == '0' && i == 0)
			std::cout << i << std::endl;
		else if (i == 0)
			std::cout << "Impossible\n";
		else
			std::cout << i << std::endl;
		return ;
	}
	if (str[0] <= '9' && str[0] >= '0')
		std::cout << static_cast<int>(str[0]) - '0' << std::endl;
	else
		std::cout << static_cast<int>(str[0]) << std::endl;
}

void	to_float(std::string str)
{
	std::cout << "float : ";
	float	i;
	int	start = 0;
	int	bo = 0;

	if (str.length() > 1)
	{
		i = atof(str.c_str());
		if (str == "nan")
		{
			std::cout << "nanf\n";
			return ;
		}
		if (str == "-inf")
		{
			std::cout << "-inff\n";
			return ;
		}
		if (str == "+inf")
		{
			std::cout << "+inff\n";
			return ;
		}
		if (str[0] == '0' && i == 0)
			std::cout << i << "f\n";
		else if (i == 0)
			std::cout << "Impossible\n";
		else
		{
			while ((str[start] >= '0' && str[start] <= '9') || (str[start] == '.' && !bo) || str[start] == '-')
			{
				if (!(str[start] == '.' && !str[start + 1]))
					std::cout << str[start];
				if (str[start] == '.')
					bo = 1;
				start++;
			}
			std::cout << "f\n";
		}
		return ;
	}
	if (str[0] <= '9' && str[0] >= '0')
		std::cout << static_cast<int>(str[0]) - '0' << "f\n";
	else
		std::cout << static_cast<int>(str[0]) << "f\n";
}

void	to_double(std::string str)
{
	std::cout << "double : ";
	float	i;
	int	start = 0;
	int	bo = 0;

	if (str.length() > 1)
	{
		i = atof(str.c_str());
		if (str == "nan")
		{
			std::cout << "nan\n";
			return ;
		}
		if (str == "-inf")
		{
			std::cout << "-inf\n";
			return ;
		}
		if (str == "+inf")
		{
			std::cout << "+inf\n";
			return ;
		}
		if (str[0] == '0' && i == 0)
			std::cout << i << std::endl;
		else if (i == 0)
			std::cout << "Impossible\n";
		else
		{
			while ((str[start] >= '0' && str[start] <= '9') || (str[start] == '.' && !bo) || str[start] == '-')
			{
				if (!(str[start] == '.' && !str[start + 1]))
					std::cout << str[start];
				if (str[start] == '.')
					bo = 1;
				start++;
			}
			std::cout << std::endl;
		}
		return ;
	}
	if (str[0] <= '9' && str[0] >= '0')
		std::cout << static_cast<int>(str[0]) - '0' << std::endl;
	else
		std::cout << static_cast<int>(str[0]) << std::endl;
}
