#include "../class/Form.hpp"

Form::Form(): _nameform("Random Form"), _signed(false),  _gradeforsign(150), _gradeforexec(150)
{
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the maximum.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[Grade Too Low Exception]\nThe grade 150 is the minimum.");
}

Form::Form(const std::string& name, bool signed, int gradeforsign, int gradeforexec): _name(name), _signed(false), _gradeforsign(gradeforsign), _gradeforexec(gradeforexec)
{
	try
	{
		if (gradeforsign > LOWEST_GRADE || gradeforexec > LOWEST_GRADE)
			throw Form::GradeTooLowException();
		else if (gradeforsign < HIGHEST_GRADE || gradeforexec < HIGHEST_GRADE)
			throw Form::GradeTooHighException();
	}
	catch (const std::exception& e)
	{
		std::cerr << C_BLUE << e.what() << END_COLOR << std::endl;
		if (gradeforsign > LOWEST_GRADE || gradeforsign < HIGHEST_GRADE)
			_gradeforsign = 150;
		else if (gradeforexec > LOWEST_GRADE || gradeforexec < HIGHEST_GRADE)
			_gradeforexec = 150;
	}
}

void Form::incrementGrade()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw Form::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (const std::exception& e)
	{
		std::cerr << C_BLUE << e.what() << END_COLOR << std::endl;
	}
}

void Form::decreaseGrade()
{
	try
	{
		if ((this->_grade + 1) > 150)
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

bool Form::getSigned(void) const
{
  return (this->_signed);
}

int Form::getGradeSign(void) const
{
  return (this->_gradeforsign);
}

int Form::getGradeExec(void) const
{
  return (this->_gradeforexec);
}

std::string const Form::getName(void) const
{
  return (this->_nameform);
}

void From::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_signed)
		throw (AlreadySignedException());
	if (this->_gradeforsign < bureaucrat.getGrade())
		throw (GradeTooLowException());
	this->_signed = true;
}

std::ostream	&operator<<( std::ostream &ostream, const Form &output )
{
	ostream << output.getName() << " grade " << output.getGrade();
	return ostream;
}
