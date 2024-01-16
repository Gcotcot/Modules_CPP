#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	this->name = "Presidential_default";
	this->grade_sign = 25;
	this->grade_execute = 5;
	this->sign = false;
	this->target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string new_target)
{
	this->name = "Presidential";
	this->grade_sign = 25;
	this->grade_execute = 5;
	this->sign = false;
	this->target = new_target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : Form(ref)
{
	*this = ref;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &ref)
{
	*this = ref;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!(this->sign && executor.getGrade() <= this->grade_execute))
		throw ExecutionException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox.\n";
	std::cout << executor.getName() << " execute " << this->name << std::endl;
}
