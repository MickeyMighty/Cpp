#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include <iostream>

#define C_RED "\033[31m"
#define END_COLOR "\033[0m"
#define LOWEST_GRADE 1
#define HIGHEST_GRADE 150

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
