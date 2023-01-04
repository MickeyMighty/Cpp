# ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include "Form.hpp"
#include <iostream>

#define C_RED "\033[31m"
#define C_BLUE "\033[34m"
#define END_COLOR "\033[0m"
#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

class Form;

class Bureaucrat
{
  private:
    std::string const _name;
    int _grade; // de 1 a 150

  public:
    Bureaucrat(void);
    Bureaucrat(const std::string& name, int grade);
     ~Bureaucrat(void);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat& operator=(const Bureaucrat& content);
    std::string const getName(void) const;
    int  getGrade(void) const;
    void	signForm(Form& form) const;
    void incrementGrade(void);
    void decreaseGrade(void);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream  &operator<<(std::ostream &output, Bureaucrat const &Bureaucrat);

#endif
