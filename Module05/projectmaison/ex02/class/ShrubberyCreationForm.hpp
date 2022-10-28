# ifndef SHRUBBERY_CLASS
#define SHRUBBERY_CLASS

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string.h>
#include <fstream>
#include <iostream>

class Bureaucrat;

class ShrubberyCreationForm
{
  private:
    const std::string _target;

  public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& content);
    void execute(Bureaucrat const &excecutor)const;
    std::string getTarget(void) const;
};

std::ostream&	operator<<( std::ostream &ostream, const ShrubberyCreationForm &output );

#endif
