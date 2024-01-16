#include "RNP.hpp"

RNP::RNP(void)
{
}

RNP::~RNP(void)
{
}

void	RNP::add_stock(int value)
{
	this->stock.push(value);
}

int	RNP::operation(int ope)
{
	int	value1;
	int	value2;

	if (this->stock.empty())
	{
		std::cout << "Error : stack is empty.\n";
		return (1);
	}
	value1 = this->stock.top();
	this->stock.pop();
	if (this->stock.empty())
	{
		std::cout << "Error : stack contain 1 value\n";
		return (1);
	}
	value2 = this->stock.top();
	this->stock.pop();
	if (ope == '*')
		this->multiply(value2, value1);
	if (ope == '+')
		this->add(value2, value1);
	if (ope == '-')
		this->minus(value2, value1);
	if (ope == '/')
		this->divise(value2, value1);
	return (0);
}

void	RNP::add(int value1, int value2)
{
	this->stock.push(value1 + value2);
}

void	RNP::minus(int value1, int value2)
{
	this->stock.push(value1 - value2);
}

void	RNP::multiply(int value1, int value2)
{
	this->stock.push(value1 * value2);
}

void	RNP::divise(int value1, int value2)
{
	this->stock.push(value1 / value2);
}

int	RNP::getTop(void)
{
	return (this->stock.top());
}

int	RNP::getSize(void)
{
	return (this->stock.size());
}
