#ifndef Intern_HPP
# define Intern_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern {

	public :
		Intern(void);
		Intern(const Intern &ref);
		Intern &operator = (const Intern &ref);
		~Intern(void);
		Form	*makeForm(std::string request, std::string name);
		
		class Failed : public std::exception {
			virtual const char *what() const throw();
		};
};

#endif
