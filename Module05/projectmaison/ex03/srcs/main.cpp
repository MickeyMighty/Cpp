#include <iostream>
#include "../class/Bureaucrat.hpp"
#include "../class/Form.hpp"
#include "../class/PresidentialPardonForm.hpp"
#include "../class/RobotomyRequestForm.hpp"
#include "../class/ShrubberyCreationForm.hpp"



int main()
{
	std::cout << " Testing "<< std::endl;
	try{
		Bureaucrat a("James", 1);
		std::cout << a;
		PresidentialPardonForm f;
		std::cout << f;

		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "***Robotomy test***"<< std::endl;
	try{
		Bureaucrat a("James", 50);
		std::cout << a;
		RobotomyRequestForm f("Coal miners");
		std::cout << f;

		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "***Schrubbery test***"<< std::endl;
	try{
		Bureaucrat a("James", 130);
		std::cout << a;
		ShrubberyCreationForm f;
		std::cout << f;

		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	return 0;
}
