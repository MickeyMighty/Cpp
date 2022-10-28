/*
* Exception handling in C++ consists of three keywords: try, throw and catch:
* The try statement allows you to define a block of code to be Welcomeed for errors
* while it is being executed.
* The throw keyword throws an exception when a problem is detected, which lets us
* create a custom error.
*/

#include "../class/Bureaucrat.hpp"
#include "../class/Form.hpp"

int main()
{
	std::cout << "---- ex01 Tests -----" << std::endl;
  Bureaucrat Jeanpaul("Jeanpaul", 5);
	std::cout << Jeanpaul << std::endl;
	try
	{
		Jeanpaul.incrementGrade();
		Jeanpaul.incrementGrade();
		std::cout << Jeanpaul << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form Welcome("Welcome", 151, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot initialize Welcome because " << e.what() << std::endl;
	}
	Form Form_a("Form_a", 1, 1);
	Form Form_b("Form_b", 3, 3);
	Form Form_c("Form_c", 3, 20);
	std::cout << Jeanpaul << std::endl;
	std::cout << Form_a << std::endl;
	std::cout << Form_b << std::endl;
	Jeanpaul.signForm(Form_a);
	Jeanpaul.signForm(Form_b);
	Jeanpaul.signForm(Form_b);
	try
	{
		Jeanpaul.decreaseGrade();
		std::cout << Jeanpaul << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Jeanpaul.signForm(Form_c);
	std::cout << Form_a << std::endl;
	std::cout << Form_b << std::endl;
	std::cout << Form_c << std::endl;
}
