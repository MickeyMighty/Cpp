#include "../class/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
  *this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& content)
{
    if (this != &content)
      return (*this);
    return (*this);
}

int ShrubberyCreationForm::getTarget(void) const
{
  return (this->_target);
}

void execute(Bureaucrat const &executor)const
{
  if ((int)executor.getGrade( > this->getGradeExec()))
    throw (Bureaucrat::GradeTooLowException());
  else if (this->getSigned() == false)
    throw (Form::AlreadySignedException());
  else
    {
      std::ofstream outfile (this->getTarget(.append("_shrubbery").c_str()));
      outfile <<
      "              v .   ._, |_  .," << std::endl <<
      "           `-._\/  .  \ /    |/_" << std::endl <<
      "               \\  _\, y | \//" << std::endl <<
      "         _\_.___\\, \\/ -.\||" << std::endl <<
      "           `7-,--.`._||  / / ," << std::endl <<
      "           /'     `-. `./ / |/_.'" << std::endl <<
      "                     |    |//" << std::endl <<
      "                     |_    /" << std::endl <<
      "                     |-   |" << std::endl <<
      "                     |   =|" << std::endl <<
      "                     |    |" << std::endl <<
      "--------------------/ ,  . \--------._" << std::endl << std::endl;
    }
  outfile.close();
  }
}

std::ostream&	operator<<( std::ostream &ostream, ShrubberyCreationForm *output )
{
	ostream << std::boolalpha << "The form "
	<< output.getName() << ", signed : " << output->getSigned()
	<< ", the grade for sign is " << output->getGradeSign()
	<< ", grade to execute " << output->getGradeExec() << std::endl;
	return ostream;
}
