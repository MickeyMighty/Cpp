#include "../class/Animal.hpp"

Cat::Cat(void)
{
  this->type = "Cat";
  std::cout << "\033[1;32mCat Default Constructor has been called\033[0m" << std::endl;
}

Cat::~Cat()
{
  std::cout << "\033[1;32m Cat Destructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
  std::cout << "\033[1;32mCat Copy constructor called\033[0m" << std::endl;
  *this = copy;
}

void Cat::makeSound(void)
{
  std::cout << "MIIIIIiiiiiiiiaaaaaaaouuuuuuuwuwwww" << std::endl;
}
