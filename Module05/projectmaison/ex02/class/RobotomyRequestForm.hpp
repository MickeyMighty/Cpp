# ifndef ROBOTMYREQUESTFORM_CLASS
#define ROBOTMYREQUESTFORM_CLASS

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string.h>
#include <fstream>
#include <iostream>

class Bureaucrat;

class RobotmyRequestForm
{
  private:
    void Robotization();

  public:
    RobotmyRequestForm(void);
    RobotmyRequestForm(const std::string& name, int gradeforsign, int gradeforexec);
    ~RobotmyRequestForm(void);
    RobotmyRequestForm(const RobotmyRequestForm &copy);
    RobotmyRequestForm& operator=(const RobotmyRequestForm& content);
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

std::ostream&	operator<<( std::ostream &ostream, const RobotmyRequestForm &output );

#endif
