#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	this->name = "Shurbbery_default";
	this->grade_sign = 145;
	this->grade_execute = 137;
	this->sign = false;
	this->target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string new_target)
{
	this->name = "Shurbbery";
	this->grade_sign = 145;
	this->grade_execute = 137;
	this->sign = false;
	this->target = new_target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : Form(ref)
{
	*this = ref;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &ref)
{
	*this = ref;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!(this->sign && executor.getGrade() <= this->grade_execute))
		throw ExecutionException();
	int		i = 0;
	std::ofstream	input;
	std::string	file = this->target + "_shrubbery";
	input.open(file.c_str());
	while (i <= 127)
		input.put(i++);
	input.close();
	std::cout << executor.getName() << " execute " << this->name << std::endl;
}
