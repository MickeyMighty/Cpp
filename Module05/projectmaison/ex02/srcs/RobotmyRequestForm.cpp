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
}

int RobotmyRequestForm::getTarget(void) const
{
  return (this->_target);
}

void execute(Bureaucrat const &excecutor)const
{
  if ((int)executor.getGrade( > this->getGradeExec()))
    throw (Bureaucrat::GradeTooLowException());
  else if (this->getSigned() == false)
    throw (Form::AlreadySignedException());
  else
  {
    std::cout << "*FIOUVVV* *FIOUVVVVVV*" << std::endl;
    std::cout << getTarget() << " has been robotomized"
  }
}

std::ostream&	operator<<( std::ostream &ostream, RobotmyRequestForm *output )
{
	ostream << std::boolalpha << "The form "
	<< output.getName() << ", signed : " << output->getSigned()
	<< ", the grade for sign is " << output->getGradeSign()
	<< ", grade to execute " << output->getGradeExec() << std::endl;
	return ostream;
}
