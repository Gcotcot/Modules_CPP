#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	Form;

class	Bureaucrat {

	public :
		Bureaucrat(void);
		Bureaucrat(std::string new_name, int new_grade);
		Bureaucrat(const Bureaucrat &ref);
		Bureaucrat &operator = (const Bureaucrat &ref);
		~Bureaucrat(void);
		void	signForm(Form &form);
		std::string	getName(void) const;
		int		getGrade(void) const;
		void		increment(Bureaucrat &ref, int nb);
		void		decrement(Bureaucrat &ref, int nb);

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};
	
	private :
		std::string	name;
		int		grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const &i);

#endif
