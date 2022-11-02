#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(): _name("Random name"), _grade(150)
{
}

RobotmyRequestForm::~RobotmyRequestForm()
{
}

RobotmyRequestForm::RobotmyRequestForm(std::string target): Form("RobotmyRequestForm", 72, 45)
{
  *this = src;
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm &copy): _name(copy.getName()), _grade(copy.getGrade())
{
  *this = copy;
}

RobotmyRequestForm	&RobotmyRequestForm::operator=(const RobotmyRequestForm& content)
{
    if (this != &content)
      return (*this);
    return (*this);
    //nothing to assign in this class, all constants
}

int RobotmyRequestForm::getTarget(void) const
{
  return (this->_target);
}

int static fail_fiftypourcent = 0;

void execute(Bureaucrat const &excecutor)const
{
  if ((int)executor.getGrade() > this->getGradeExec())
    throw (Bureaucrat::GradeTooLowException());
  else if (this->getSigned() == false)
    throw (Form::AlreadySignedException());
  else if (fail_fiftypourcent++ % 2)
  {
    std::cout << "*FIOUVVV* *FIOUVVVVVV*" << std::endl;
    std::cout << getTarget() << " has been robotomized" << std::endl;
  }
  else
    std::cout << getTarget() << "Robotimization failed." << std::endl;
}

std::ostream&	operator<<( std::ostream &ostream, RobotmyRequestForm *output )
{
	ostream << std::boolalpha << "The form "
	<< output.getName() << ", signed : " << output->getSigned()
	<< ", the grade for sign is " << output->getGradeSign()
	<< ", grade to execute " << output->getGradeExec() << std::endl;
	return ostream;
}
