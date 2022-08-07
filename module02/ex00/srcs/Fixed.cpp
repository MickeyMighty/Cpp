#include <iostream>
#include "../class/Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& content)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &content)
  this->_stockvalue = content.getRawBits();
  return (*this);
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_stockvalue);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_stockvalue = raw;
}
