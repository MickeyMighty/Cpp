# ifndef FORM_CLASS
#define FORM_CLASS

#include "Bureaucrat.hpp"
#include <string.h>
#include <iostream>

class Bureaucrat;

class Form
{
  private:
    std::string const _nameform;
    bool  _besigned;
    int _gradeforsign; // de 1 a 150
    int _gradeforexec; // de 1 a 150

  public:
    Form(void);
    Form(const std::string& name, int gradeforsign, int gradeforexec);
    virtual ~Form(void);
    Form(const Form &copy);
    Form& operator=(const Form& content);
    const std::string& getName(void) const;
    bool getSigned(void) const;
    int  getGradeSign(void) const;
    int  getGradeExec(void) const;
    void	beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(Bureaucrat const &executor)const = 0;
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
    class AlreadySignedException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream	&operator<<( std::ostream &ostream, Form &output );

#endif
