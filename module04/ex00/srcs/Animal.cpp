#include "../class/Animal.hpp"

Animal::Animal()
{
  std::cout << "\033[1;32mAnimal Default Constructor has been called\033[0m" << std::endl;
}

Animal::~Animal()
{
  std::cout << "\033[1;32mAnimal Destructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
  std::cout << "\033[1;32mCopy constructor called\033[0m" << std::endl;
  *this = copy;
}

Animal& Animal::operator=(const Animal& content)
{
    std::cout << "\033[1;32mCopy assignment operator called\033[0m" << std::endl;
    if (this != &content)
      this->type = content.getType();
    return (*this);
}

const std::string &Animal::getType(void) const
{
  return (this->type);
}

std::ostream &operator<<(std::ostream &output, Animal const &Animal)
{
  output << Animal.toFloat();
  return (output);
}
