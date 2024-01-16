#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->grade = 150;
	this->name = "Unknow";
}

Bureaucrat::Bureaucrat(std::string new_name, int new_grade)
{
	if (new_grade < 1)
		throw GradeTooHighException();
	if (new_grade > 150)
		throw GradeTooLowException();
	this->grade = new_grade;
	this->name = new_name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	*this = ref;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &ref)
{
	*this = ref;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increment(Bureaucrat &ref, int nb)
{
	if (ref.grade - nb < 1)
		throw GradeTooLowException();
	ref.grade -= nb;
}

void	Bureaucrat::decrement(Bureaucrat &ref, int nb)
{
	if (ref.grade + nb > 150)
		throw GradeTooHighException();
	ref.grade += nb;
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Impossible to increment, grade too high.\n");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Impossible to decrement, grade too low.\n");
}

std::ostream & operator << (std::ostream & o, Bureaucrat const &i)
{
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".\n";
    return o;
}
