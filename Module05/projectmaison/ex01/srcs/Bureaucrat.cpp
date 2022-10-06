#include "../class/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Random name"), _grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade, so you can't raise your grade any more.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest, so you can't lower the grade any more.");
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name)
{
	try
	{
		if (grade > LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_RED << e.what() << END_COLOR << std::endl;
		this->_grade = 150;
	}
}

void Bureaucrat::incrementGrade(){
	try
	{
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_RED << e.what() << END_COLOR << std::endl;
	}
}

void Bureaucrat::decreaseGrade(){
	try
	{
		if ((_grade + 1) > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_RED << e.what() << END_COLOR << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName()), _grade(copy.getGrade())
{
  *this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& content)
{
    if (this != &content)
			this->_grade = content._grade;
    return (*this);
}

int Bureaucrat::getGrade(void) const
{
  return (this->_grade);
}

std::string const Bureaucrat::getName(void) const
{
  return (this->_name);
}

void	Bureaucrat::signForm(Form& form) const
{
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signs the form " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->_name << " can't sign the form " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &output )
{
	ostream << output.getName() << " grade " << output.getGrade();
	return ostream;
}
