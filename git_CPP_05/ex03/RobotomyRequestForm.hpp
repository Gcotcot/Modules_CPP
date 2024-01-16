#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include "AForm.hpp"

class	RobotomyRequestForm : public Form{

	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string new_target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &ref);
		~RobotomyRequestForm(void);
		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	target;
};

#endif
