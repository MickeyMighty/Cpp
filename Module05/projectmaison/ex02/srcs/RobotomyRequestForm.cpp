#include "../class/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form("RobotomyRequestForm", 72, 45), _target(copy._target)
{
  *this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& content)
{
    if (this != &content)
      return (*this);
    return (*this);
    //nothing to assign in this class, all constants
}

std::string RobotomyRequestForm::getTarget(void) const
{
  return (this->_target);
}

int static fail_fiftypourcent = 0;

void RobotomyRequestForm::execute(Bureaucrat const &executor)const
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

std::ostream&	operator<<( std::ostream &ostream, RobotomyRequestForm *output )
{
	ostream << std::boolalpha << "The form "
	<< output->getName() << ", signed : " << output->getSigned()
	<< ", the grade for sign is " << output->getGradeSign()
	<< ", grade to execute " << output->getGradeExec() << std::endl;
	return ostream;
}
