#include "Base.hpp"

int main(void)
{
	Base *p;

	std::srand(time(NULL));
	p = generate();
	identify(p);
	identify(*p);
	delete p;
}
