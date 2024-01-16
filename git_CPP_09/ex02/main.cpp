#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error : nb args invalid\n";
		return (0);
	}
	int i = 1;
	while (argv[i])
	{
		int y = 0;
		while (argv[i][y])
		{
			if (!(argv[i][y] >= '0' && argv[i][y] <= '9'))
			{
				std::cout << "Error : arg not a positive number\n";
				return (0);
			}
			y++;
		}
		long	value = atol(argv[i++]);
		if (value > 2147483647)
		{
			std::cout << "Error : int overflow\n";
			return (0);
		}
	}
	i = 1;
	PmergeMe	me;
	std::cout << "Before: ";
	while (argv[i])
	{
		std::cout << argv[i] << " ";
		int	value = atoi(argv[i++]);
		me.add_value(value);
	}
	std::cout << std::endl;
	me.aff_vect();
	me.aff_list();
	return (0);
}
