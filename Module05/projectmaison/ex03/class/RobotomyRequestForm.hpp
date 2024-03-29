# ifndef ROBOTOMYREQUESTFORM_CLASS
#define ROBOTOMYREQUESTFORM_CLASS

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string.h>
#include <fstream>
#include <iostream>

class Bureaucrat;
class Form;

class RobotomyRequestForm: public Form
{
  private:
    const std::string _target;

  public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string target);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& content);
    std::string getTarget(void) const;
    void execute(Bureaucrat const &executor) const;
};

#endif
