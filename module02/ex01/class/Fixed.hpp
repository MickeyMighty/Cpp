#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {

private:
  int               _stockvalue;
  static const int  _stockbits = 8;

public:

  Fixed(void);  // Constructeur par défaut
  Fixed(const int number);  // Constructeur const interger
  Fixed(const float number);  // Constructeur const float
  Fixed(const Fixed& copy);  // Constructeur de recopie
  ~Fixed(void); // Destructeur éventuellement virtuel
  Fixed &operator=(const Fixed &content); // Operator d'affectation
  float toFloat(void) const;
  int toInt(void) const;
  int getRawBits(void) const;
  void setRawBits(int const raw);
} ;

std::ostream  &operator<<(std::ostream &output, Fixed const &fixed);

#endif
