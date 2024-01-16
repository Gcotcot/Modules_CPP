#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &ref)
{
	*this = ref;
}

Intern	&Intern::operator = (const Intern &ref)
{
	*this = ref;
	return (*this);
}

Intern::~Intern(void)
{
}

Form	*Intern::makeForm(std::string request, std::string name)
{
	std::string	form[3] = {"robotomy request", "presidential request","shrubbery request"};
	int	i = 0;
	Form* rrf;
	while (i < 4 && form[i] != request)
		i++;
	switch (i) {
		case 0:
			rrf = new RobotomyRequestForm(name);;
			break ;
		case 1:
			rrf = new PresidentialPardonForm(name);
			break ;
		case 2:
			rrf = new ShrubberyCreationForm(name);
			break ;

		default :
			throw Failed();
			break ;
	}
	return (rrf);
}

const char	*Intern::Failed::what() const throw()
{
	return ("Form is not in list.\n");
}
