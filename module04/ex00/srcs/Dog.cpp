#include "../class/Animal.hpp"

Dog::Dog(void)
{
  std::cout << "\033[1;32mDog Default Constructor has been called\033[0m" << std::endl;
  this->_name = "no name";
}

Dog::Dog(std::string name)
{
  std::cout << "\033[1;32mDog Constructor has been called\033[0m" << std::endl;
  this->_name = name;
}

Dog::~Dog()
{
  std::cout << "\033[1;32m Dog Destructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
  std::cout << "\033[1;32mDog Copy constructor called\033[0m" << std::endl;
  *this = copy;
}

void Dog::makeSound(void)
{
  std::cout << "WWOOOOOOoooooooaaaaaaffffffff Woaf Woaf" << std::endl;
}
