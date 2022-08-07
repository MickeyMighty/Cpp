#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {

private:
  int               _stockvalue;
  static const int  _stockbits = 8;

public:

  // Constructeur
  Fixed(void);  // Constructeur par défaut
  Fixed(const int number);  // Constructeur const interger
  Fixed(const float number);  // Constructeur const float
  Fixed(const Fixed& copy);  // Constructeur de recopie
  // Destructeur
  ~Fixed(void); // Destructeur éventuellement virtuel
  // Operator overload
  Fixed &operator=(const Fixed &content); // Operator d'affectation
  // Operator
  bool operator>(Fixed Fixed) const;
  bool operator<(Fixed Fixed) const;
  bool operator<=(Fixed Fixed) const;
  bool operator>=(Fixed Fixed) const;
  bool operator==(Fixed Fixed) const;
  bool operator!=(Fixed Fixed) const;

  float operator+(Fixed Fixed) const;
  float operator-(Fixed Fixed) const;
  float operator*(Fixed Fixed) const;
  float operator/(Fixed Fixed) const;

  // Declare prefix and postfix increment operators.
  // https://docs.microsoft.com/fr-fr/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170
  // Point& operator++();       // Prefix increment operator.
  // Point operator++(int);     // Postfix increment operator.
  Fixed& operator++(); // pre incrementation
  Fixed& operator--();
  // https://askcodez.com/c-la-surcharge-pour-les-pre-et-post-incrementation.html
  Fixed operator++(int); // post incrementation
  Fixed operator--(int);

  float toFloat(void)const;
  int toInt(void)const;
  static Fixed &min(Fixed &first, Fixed &second);
  static const Fixed &min(Fixed const &first, Fixed const &second);
  static Fixed &max(Fixed &first, Fixed &second);
  static const Fixed &max(Fixed const &first, Fixed const &second);

  int getRawBits(void) const;
  void setRawBits(int const raw);
} ;

std::ostream  &operator<<(std::ostream &output, Fixed const &fixed);

#endif
