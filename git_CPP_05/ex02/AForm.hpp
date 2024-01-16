#ifndef Form_HPP
# define Form_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

	public :
		Form(void);
		Form(std::string new_name, int new_grade_sign, int new_grade_execute);
		Form(const Form &ref);
		Form &operator = (const Form &ref);
		virtual ~Form(void);
		void	beSigned(const Bureaucrat *bur);
		std::string	getName(void) const;
		int		getGradeSign(void) const;
		int		getGradeExecute(void) const;
		bool		isSign(void) const;
		virtual void		execute(Bureaucrat const &executor) const = 0;
		
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};
		class ExecutionException : public std::exception {
			virtual const char *what() const throw();
		};

	protected :
		std::string	name;
		bool			sign;
		int		grade_sign;
		int		grade_execute;
};

std::ostream & operator<<( std::ostream & o, Form const &i);

#endif
