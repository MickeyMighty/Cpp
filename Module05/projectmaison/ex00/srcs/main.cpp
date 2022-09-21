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
	Bureaucrat Jeanpaul("JeanPaul", 150);
	Bureaucrat Philippe("Philippe", 151);
	std::cout << Jeanpaul << std::endl;
	std::cout << Philippe << std::endl;
	Bureaucrat Jeanpaul_copy(Jeanpaul);
	Bureaucrat Fael;
	std::cout << "invalid decrease Grade" << std::endl;
	std::cout << Jeanpaul << std::endl;
	Jeanpaul.decreaseGrade();
	std::cout << "valid inrease Grade" << std::endl;
	std::cout << Jeanpaul << std::endl;
	Jeanpaul.incrementGrade();
	std::cout << Jeanpaul << std::endl;
	std::cout << "assignment overload" << std::endl;
	std::cout << Jeanpaul_copy << std::endl;
	Fael = Jeanpaul_copy;
	Jeanpaul_copy.incrementGrade();
	Jeanpaul_copy.incrementGrade();
	std::cout << Jeanpaul_copy << std::endl;
	std::cout << Fael << std::endl;
	std::cout << "valid decrease Grade" << std::endl;
	Jeanpaul_copy.incrementGrade();
	std::cout << Jeanpaul_copy << std::endl;
	std::cout << "invalid incrementGraderease Grade" << std::endl;
	Bureaucrat Boss("Boss", 1);
	std::cout << Boss << std::endl;
	Boss.incrementGrade();
	std::cout << Boss << std::endl;
	Boss.decreaseGrade();
	std::cout << Boss << std::endl;
	}
}
