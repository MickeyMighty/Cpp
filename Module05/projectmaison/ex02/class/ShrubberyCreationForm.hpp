# ifndef SHRUBBERYCREATIONFORM_CLASS
#define SHRUBBERYCREATIONFORM_CLASS

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string.h>
#include <fstream>
#include <iostream>

class Bureaucrat;
class Form;

class ShrubberyCreationForm: public Form
{
  private:
    const std::string _target;
    ShrubberyCreationForm(void);

  public:
    ShrubberyCreationForm(const std::string target);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& content);
    std::string getTarget(void) const;
    void execute(Bureaucrat const &executor)const;
};

std::ostream	&operator<<( std::ostream &ostream, const ShrubberyCreationForm *output );

#endif
