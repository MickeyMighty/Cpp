#include "../class/WrongWrongCat.hpp"

WrongCat::WrongCat(void)
{
  this->type = "WrongCat";
  std::cout << "\033[1;32mWrongCat Default Constructor has been called\033[0m" << std::endl;
}

WrongCat::~WrongCat()
{
  std::cout << "\033[1;32m WrongCat Destructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
  std::cout << "\033[1;32mWrongCat Copy constructor called\033[0m" << std::endl;
  *this = copy;
}

void WrongCat::makeSound(void)
{
  std::cout << "MIIIIIiiiiiiiiaaaaaaaouuuuuuuwuwwww" << std::endl;
}
