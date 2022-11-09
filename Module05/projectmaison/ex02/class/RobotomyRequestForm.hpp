# ifndef ROBOTOMYREQUESTFORM_CLASS
#define ROBOTOMYREQUESTFORM_CLASS

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string.h>
#include <fstream>
#include <iostream>

class Bureaucrat;
class Form;

class RobotmyRequestForm: public Form
{
  private:
    const std::string _target;
    RobotmyRequestForm(void);

  public:
    RobotmyRequestForm(const std::string target);
    ~RobotmyRequestForm(void);
    RobotmyRequestForm(const RobotmyRequestForm &copy);
    RobotmyRequestForm& operator=(const RobotmyRequestForm& content);
    std::string getTarget(void) const;
    void execute(Bureaucrat const &executor) const;
};

std::ostream&	operator<<( std::ostream &ostream, const RobotmyRequestForm &output );

#endif
