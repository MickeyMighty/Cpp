
#include "../class/Bureaucrat.hpp"
#include "../class/Form.hpp"
#include "../class/PresidentialPardonForm.hpp"
#include "../class/RobotomyRequestForm.hpp"
#include "../class/ShrubberyCreationForm.hpp"

int main(void)
{
	{
	// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// 	Bureaucrat *a = new Bureaucrat();
	// 	Form *b = new PresidentialPardonForm("default");
	// 	// Form *c = new RobotomyRequestForm();
	// 	// Form *d = new ShrubberyCreationForm();
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	std::cout << a;
	// 	std::cout << b;
	//
	// 	try
	// 	{
	// 		b->beSigned(*a);
	// 		// b->execute(*a);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	//
	// 	std::cout << b;
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// 	delete a;
	// 	delete b;
	// 	std::cout << std::endl;
	// }
	// std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	// {
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// 	Bureaucrat *a = new Bureaucrat("Assistant", 145);
	// 	Bureaucrat *b = new Bureaucrat("CEO", 1);
	// 	Form *c = new PresidentialPardonForm("some dude");
	// 	// Form *d = new Form(*c);
	// 	// Form *d = new Form("Rent Contract", 140, 100); // you are not able to construct an abstract class here
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	std::cout << a;
	// 	std::cout << b;
	// 	std::cout << c;
	// 	std::cout << std::endl;
	//
	// 	// Try to execute before signing
	// 	try
	// 	{
	// 		c->execute(*b);
	// 	}
	// 	catch (Form::AlreadySignedException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	// Assistant signs the Form
	// 	try
	// 	{
	// 		c->beSigned(*a);
	// 		// a->signForm(*c);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to sign the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	//
	// 	// CEO signs the Form
	// 	std::cout << std::endl;
	// 	std::cout << c;
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		c->beSigned(*b);
	// 		// b->signForm(*c);
	// 	}
	// 	// catch(Form::GradeTooLowException &e)
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << b->getName() << " was not able to sign the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	std::cout << c;
	// 	std::cout << std::endl;
	//
	// 	// try signing the from again
	// 	std::cout << std::endl;
	// 	b->signForm(*c);
	// 	std::cout << std::endl;
	//
	// 	// execute the Form from assistant
	// 	try
	// 	{
	// 		c->execute(*a);
	// 		// a.execute(*c);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;
	//
	// 	// execute Form from CEO
	// 	try
	// 	{
	// 		c->execute(*b);
	// 		// b.execute(*c);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << b->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// 	delete a;
	// 	delete b;
	// 	delete c;
	// 	std::cout << std::endl;
	// }
	// std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	// {
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// 	Bureaucrat *a = new Bureaucrat("Emperor", 1);
	// 	PresidentialPardonForm *b = new PresidentialPardonForm("this other dude");
	// 	PresidentialPardonForm *c = new PresidentialPardonForm(*b);
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	std::cout << a;
	// 	std::cout << b;
	// 	std::cout << c;
	// 	b->beSigned(*a);
	// 	a->signForm(*c);
	// 	b->execute(*a);
	// 	a->execute(*c);
	// 	// c->execute(*a);
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// 	delete a;
	// 	delete b;
	// 	delete c;
	// 	std::cout << std::endl;
	// }
	// std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	// {
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// 	Bureaucrat *a = new Bureaucrat("Emperor", 1);
	// 	RobotomyRequestForm *b = new RobotomyRequestForm("Bender");
	// 	ShrubberyCreationForm *c = new ShrubberyCreationForm("christmas");
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	std::cout << a;
	// 	std::cout << b;
	// 	std::cout << c;
	// 	b->beSigned(*a);
	// 	a->signForm(*c);
	// 	for (int i= 0; i < 10; i++)
	// 		b->execute(*a);
	// 	// a->execute(*c);
	// 	c->execute(*a);
	// 	std::cout << std::endl;
	//
	// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// 	delete a;
	// 	delete b;
	// 	delete c;
	// 	std::cout << std::endl;
	}
	return (0);
}
