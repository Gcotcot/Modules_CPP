#include "Base.hpp"

Base::~Base(void)
{
}

Base	*generate(void)
{
	int	i = std::rand();
	if (i % 3 == 0)
		return (new A());
	else if (i % 2)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	std::cout << "pointeur : ";
	if (dynamic_cast<A *>(p))
		std::cout << "Type is class A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "Type is class B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "Type is class C\n";
	else
		std::cout << "Type not found\n";
}

void	identify(Base &p)
{
	A a;
	B b;
	C c;
	std::cout << "ref : ";
	try {
		a = dynamic_cast<A&>(p);
		std::cout << "Type is class A\n";
	}
	catch (std::exception & e)
	{
	}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "Type is class B\n";
	}
	catch (std::exception & e)
	{
	}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "Type is class C\n";
	}
	catch (std::exception & e)
	{
	}
}
