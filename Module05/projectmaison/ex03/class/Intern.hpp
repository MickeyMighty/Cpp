# ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& Intern);
		Intern& operator=(const Intern& boj);

		// class FormNotFoundException : public std::exception{
		// 	public:
		// 		const char* what() const throw(){
		// 			return "This type of form does not exist.";
		// 		}
		// };

		Form* makeForm( std::string &name, const std::string target );
};

#endif
