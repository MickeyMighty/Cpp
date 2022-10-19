# ifndef PRESIDENTIALPARDONFORM_CLASS
#define PRESIDENTIALPARDONFORM_CLASS

#include "Bureaucrat.hpp"
#include <string.h>
#include <iostream>

class Bureaucrat;

class PresidentialPardonForm
{
  private:
    std::string const _nameform;
    bool  _besigned;
    int _gradeforsign; // de 1 a 150
    int _gradeforexec; // de 1 a 150

  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string& name, int gradeforsign, int gradeforexec);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& content);
    const std::string& getName(void) const;
    bool getSigned(void) const;
    int  getGradeSign(void) const;
    int  getGradeExec(void) const;
    void	beSigned(const Bureaucrat& bureaucrat);
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

std::ostream&	operator<<( std::ostream &ostream, const PresidentialPardonForm &output );

#endif
