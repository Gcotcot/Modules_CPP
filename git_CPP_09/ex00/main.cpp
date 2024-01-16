#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange	coin;

	if (argc != 2)
	{
		std::cout << "Error: could not open file.\n";
		return (0);
	}
	try {
		coin.open_cal();
		coin.open_file(argv[1]);
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	//(void)argv;
	return (0);
}
