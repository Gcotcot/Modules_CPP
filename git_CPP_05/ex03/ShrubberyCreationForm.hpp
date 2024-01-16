#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class	ShrubberyCreationForm : public Form {

	public :
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string new_target);
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &ref);
		~ShrubberyCreationForm(void);
		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	target;
};

#endif
