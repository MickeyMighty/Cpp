/*
* Exception handling in C++ consists of three keywords: try, throw and catch:
* The try statement allows you to define a block of code to be tested for errors
* while it is being executed.
* The throw keyword throws an exception when a problem is detected, which lets us
* create a custom error.
*/

#include "../class/Bureaucrat.hpp"

int main()
{
  {
	std::cout << "---- ex00 Tests -----" << std::endl;
	Bureaucrat frank("Frank", 150);
	Bureaucrat frank2("Frank2", 151);
	std::cout << frank2 << std::endl;
	Bureaucrat frank_copy(frank);
	Bureaucrat pete;
	std::cout << "invalid decrease Grade" << std::endl;
	std::cout << frank << std::endl;
	frank.decreaseGrade();
	std::cout << "valid inrease Grade" << std::endl;
	std::cout << frank << std::endl;
	frank.incrementGrade();
	std::cout << frank << std::endl;
	std::cout << "assignment overload" << std::endl;
	std::cout << frank_copy << std::endl;
	pete = frank_copy;
	frank_copy.incrementGrade();
	frank_copy.incrementGrade();
	std::cout << frank_copy << std::endl;
	std::cout << pete << std::endl;
	std::cout << "valid decrease Grade" << std::endl;
	frank_copy.incrementGrade();
	std::cout << frank_copy << std::endl;
	std::cout << "invalid incrementGraderease Grade" << std::endl;
	Bureaucrat chief("Cheffe", 1);
	std::cout << chief << std::endl;
	chief.incrementGrade();
	std::cout << chief << std::endl;
	chief.decreaseGrade();
	std::cout << chief << std::endl;
	}
}
