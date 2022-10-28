# ifndef PRESIDENTIALPARDONFORM_CLASS
#define PRESIDENTIALPARDONFORM_CLASS

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string.h>
#include <iostream>

class Bureaucrat;

class Form;
class PresidentialPardonForm
{
  private:
    const std::string _target;

  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string target);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& content);
    std::string& getTarget(void) const;
    void execute(Bureaucrat const &executor) const;
};

std::ostream&	operator<<( std::ostream &ostream, const PresidentialPardonForm &output );

#endif
