#include "Span.hpp"

Span::Span(void)
{
	this->size = 0;
	this->store = 0;
	std::vector<int> tmp(0);
	this->vect = tmp;
}

Span::Span(unsigned int N)
{
	this->size = N;
	this->store = 0;
	std::vector<int> tmp(N);
	this->vect = tmp;
}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span	&Span::operator = (const Span &ref)
{
	this->size = ref.getSize();
	this->store = ref.getStore();
	this->vect = ref.getVect();
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int n)
{
	if (this->store + 1 > this->size)
		throw outOfSize();
	this->vect[this->store] = n;
	this->store++;	
}

int	Span::shortestSpan(void)
{
	if (this->store < 2)
		throw insufisant();
	std::vector<int>::iterator it = this->vect.begin();
	std::vector<int>::iterator ite = it + this->store;
	sort (it, ite);
	if (this->store == 2)
		return (this->vect[1] - this->vect[0]);
	int	shortest = -1;
	for (unsigned int i = 0; i < this->store - 1; i++)
	{
		if (shortest < 0 || (shortest > this->vect[i + 1] - this->vect[i]))
			shortest = this->vect[i + 1] - this->vect[i];
	}
	return (shortest);
}

int	Span::longestSpan(void)
{
	if (this->store < 2)
		throw insufisant();
	std::vector<int>::iterator it = this->vect.begin();
	std::vector<int>::iterator ite = it + this->store;
	sort (it, ite);
	return (this->vect[this->store - 1] - this->vect[0]);
}

const char	*Span::insufisant::what() const throw()
{
	return ("Insufisant values.");
}

const char	*Span::outOfSize::what() const throw()
{
	return ("Vector is full.");
}
