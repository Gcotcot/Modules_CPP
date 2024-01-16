#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	this->name = "Robotomy_default";
	this->grade_sign = 72;
	this->grade_execute = 45;
	this->sign = false;
	this->target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string new_target)
{
	this->name = "Robotomy";
	this->grade_sign = 72;
	this->grade_execute = 45;
	this->sign = false;
	this->target = new_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : Form(ref)
{
	*this = ref;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &ref)
{
	*this = ref;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!(this->sign && executor.getGrade() <= this->grade_execute))
		throw ExecutionException();
	std::cout << "* LOUD DRILLING NOISES *\n";
	std::srand(time(NULL));
	if (std::rand() % 2 == 0)
		std::cout << executor.getName() << " has been robotomized.\n";
	else
		std::cout << executor.getName() << " robotomy failed.\n";
	std::cout << executor.getName() << " execute " << this->name << std::endl;
}
