#include "../class/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "\033[1;32mWrongAnimal Default Constructor has been called\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "\033[1;32mWrongAnimal Destructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
  std::cout << "\033[1;32mWrongAnimal Copy constructor called\033[0m" << std::endl;
  *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& content)
{
    std::cout << "\033[1;32mWrongAnimal Copy assignment operator called\033[0m" << std::endl;
    if (this != &content)
      this->type = content.getType();
    return (*this);
}

const std::string &WrongAnimal::getType(void) const
{
  return (this->type);
}

std::ostream &operator<<(std::ostream &output, WrongAnimal const &WrongAnimal)
{
  output << WrongAnimal.toFloat();
  return (output);
}
