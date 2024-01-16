#include "RNP.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : nb args invalid\n";
		return (0);
	}
	int	i = 0;
	RNP	rnp;
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			rnp.add_stock((int)argv[1][i] - 48);
		else if (argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/')
		{
			if(rnp.operation(argv[1][i]))
				return (0);
		}
		else if (argv[1][i] == 32)
		{}
		else
		{
			std::cout << "Error : invalid character\n";
			return (0);
		}
		i++;
	}
	if (rnp.getSize() == 1)
		std::cout << rnp.getTop() << std::endl;
	else
		std::cout << "Error : stack contain more than 1 integer at the end\n";
	return (0);
}
