/*
** Pour rappel un scalaire est un type de donnée qui ne représente
** qu'une seule variable à la fois : la variable ne représente qu'une seule
** et unique donnée. Un entier, un caractère, un réel, un booléen, etc., sont des scalaires.
*/


// https://embeddedartistry-com.translate.goog/blog/2018/07/12/simple-fixed-point-conversion-in-c/?_x_tr_sl=auto&_x_tr_tl=fr&_x_tr_hl=fr
// https://stackoverflow-com.translate.goog/questions/7757278/what-does-and-mean-in-c-for-cout-cin?_x_tr_sl=auto&_x_tr_tl=fr&_x_tr_hl=fr

#include "../class/Fixed.hpp"

int main( void ) {
  Fixed a;
  Fixed const b( 10 );
  Fixed const c( 42.42f );
  Fixed const d( b );
  a = Fixed( 1234.4321f );
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;
  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  return 0;
}
