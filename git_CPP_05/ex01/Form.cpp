#include "Form.hpp"

Form::Form(void)
{
	this->name = "Default";
	this->grade_sign = 150;
	this->grade_execute = 150;
	this->sign = false;
}

Form::Form(std::string new_name, int new_grade_sign, int new_grade_execute)
{
	if (new_grade_sign < 1 || new_grade_execute < 1)
		throw GradeTooHighException();
	if (new_grade_sign > 150 || new_grade_execute > 150)
		throw GradeTooLowException();
	this->name = new_name;
	this->grade_sign = new_grade_sign;
	this->grade_execute = new_grade_execute;
	this->sign = false;
}

Form::Form(const Form &ref)
{
	*this = ref;
}

Form	&Form::operator = (const Form &ref)
{
	*this = ref;
	return (*this);
}

Form::~Form(void)
{
}

std::string	Form::getName(void) const
{
	return (this->name);
}

int	Form::getGradeSign(void) const
{
	return (this->grade_sign);
}

int	Form::getGradeExecute(void) const
{
	return (this->grade_execute);
}

bool	Form::isSign(void) const
{
	return (this->sign);
}

void	Form::beSigned(const Bureaucrat *bur)
{
	if (bur->getGrade() > this->grade_sign)
		throw GradeTooLowException();
	this->sign = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Impossible to sign, grade too high.\n");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Impossible to sign, grade too low.\n");
}

std::ostream & operator << (std::ostream & o, Form const &i)
{
    o << "Form name : " << i.getName() << "[" << i.isSign() << "]\n"
    	<< "Require grade to execute : " << i.getGradeExecute() << "\n"
    	<< "Require grade to sign : " << i.getGradeSign() << "\n";
    return o;
}
