#include "../class/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form("PresidentialPardonForm", 25, 5), _target(copy._target)
{
  *this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& content)
{
    if (this != &content)
      return (*this);
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
  return (this->_target);
}

int static fail_fiftypourcent = 0;

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
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

std::ostream	&operator<<( std::ostream &ostream, PresidentialPardonForm *output )
{
	ostream << std::boolalpha << "The form "
	<< output->getName() << ", signed : " << output->getSigned()
	<< ", the grade for sign is " << output->getGradeSign()
	<< ", grade to execute " << output->getGradeExec() << std::endl;
	return ostream;
}
