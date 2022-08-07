#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

// Forme canonique de Coplien

class Fixed {

private:
  int               _stockvalue;
  static const int  _stockbits = 8;

public:

  Fixed(void);  // Constructeur par défaut
  Fixed(const Fixed& copy);  // Constructeur de recopie
  ~Fixed(void); // Destructeur éventuellement virtuel
  Fixed &operator=(const Fixed &content); // Operator d'affectation
  int getRawBits(void) const;
  void setRawBits(int const raw);
} ;

#endif
