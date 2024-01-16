#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include "AForm.hpp"

class	PresidentialPardonForm : public Form {

	public :
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string new_target);
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &ref);
		~PresidentialPardonForm(void);
		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	target;
};

#endif
