#include "../class/Form.hpp"

Form::Form(): _nameform("Random Form"), _besigned(false),  _gradeforsign(150), _gradeforexec(150)
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

const char* Form::AlreadySignedException::what() const throw()
{
	return ("[Already Signed Exception]\nThis Form is already signed.");
}

Form::Form(const std::string& name, int gradeforsign, int gradeforexec)
		: _nameform(name)
		, _besigned(false)
		, _gradeforsign(gradeforsign)
		, _gradeforexec(gradeforexec)
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

Form::Form(const Form &copy)
		: _nameform(copy._nameform)
		, _besigned(false)
		, _gradeforsign(copy._gradeforsign)
		, _gradeforexec(copy._gradeforexec)
{
}

Form	&Form::operator=(const Form& content)
{
    if (this != &content)
		{
		}
    return (*this);
}

bool Form::getSigned(void) const
{
  return (this->_besigned);
}

int Form::getGradeSign(void) const
{
  return (this->_gradeforsign);
}

int Form::getGradeExec(void) const
{
  return (this->_gradeforexec);
}

const std::string& Form::getName(void) const
{
  return (this->_nameform);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_besigned)
		throw (AlreadySignedException());
	if (this->_gradeforsign < bureaucrat.getGrade())
		throw (GradeTooLowException());
	this->_besigned = true;
}

void Form::execute(Bureaucrat const &executor)const
{
	(void)executor;
}

std::ostream&	operator<<( std::ostream &ostream, const Form &output )
{
	ostream << std::boolalpha << "The form "
	<< output.getName() << ", signed : " << output.getSigned()
	<< ", the grade for sign is " << output.getGradeSign()
	<< ", grade to execute " << output.getGradeExec() << std::endl;
	return ostream;
}
