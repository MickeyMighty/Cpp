#include "../class/Form.hpp"

Form::Form(): _name("Random name"), _grade(150)
{
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade, so you can't raise your grade any more.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest, so you can't lower the grade any more.");
}

Form::Form(const std::string& name, int grade): _name(name)
{
	try
	{
		if (grade > LOWEST_GRADE)
			throw Form::GradeTooLowException();
		else if (grade < HIGHEST_GRADE)
			throw Form::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_BLUE << e.what() << END_COLOR << std::endl;
		this->_grade = 150;
	}
}

void Form::incrementGrade(){
	try
	{
		if (_grade - 1 < 1)
			throw Form::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_BLUE << e.what() << END_COLOR << std::endl;
	}
}

void Form::decreaseGrade(){
	try
	{
		if ((_grade + 1) > 150)
			throw Form::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_BLUE << e.what() << END_COLOR << std::endl;
	}
}

Form::Form(const Form &copy): _name(copy.getName()), _grade(copy.getGrade())
{
  *this = copy;
}

Form	&Form::operator=(const Form& content)
{
    if (this != &content)
			this->_grade = content._grade;
    return (*this);
}

int Form::getGrade(void) const
{
  return (this->_grade);
}

std::string const Form::getName(void) const
{
  return (this->_name);
}

void signForm()
{
    std::cout << this->_ << " signed " << this->_name
}

std::ostream	&operator<<( std::ostream &ostream, const Form &output )
{
	ostream << output.getName() << " grade " << output.getGrade();
	return ostream;
}
