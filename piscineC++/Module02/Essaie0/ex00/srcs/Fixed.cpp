#include <iostream>
#include "../class/Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const & src)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
  return ;
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
	return ;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_stockvalue = rhs.getRawBits();
	return (*this);
}
