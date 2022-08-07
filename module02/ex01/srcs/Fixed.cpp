#include "../class/Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  this->_stockvalue = 0;
}

Fixed::Fixed(const int number)
{
  std::cout << "Int constructor called" << std::endl;
  this->_stockvalue = number << this->_stockbits;
}

Fixed::Fixed(const float number)
{
  std::cout << "Float constructor called" << std::endl;
  this->_stockvalue = roundf(number * (1 << this->_stockbits));
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

float Fixed::toFloat(void) const
{
  return ((float)this->_stockvalue / (float)(1 << this->_stockbits));
}

int Fixed::toInt(void) const
{
  return (this->_stockvalue >> this->_stockbits);
}

int			Fixed::getRawBits(void) const
{
	return (this->_stockvalue);
}

void		Fixed::setRawBits(int const raw)
{
	this->_stockvalue = raw;
}

Fixed &Fixed::operator=(const Fixed& content)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &content)
    this->_stockvalue = content.getRawBits();
  return (*this);
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
  output << fixed.toFloat();
  return (output);
}
