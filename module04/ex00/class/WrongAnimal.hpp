#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
  protected:
    std::string type;

  public:
	   WrongAnimal(void);
	   WrongAnimal(const WrongAnimal &src);
	   ~WrongAnimal(void);
	   WrongAnimal	&operator=(const WrongAnimal& content);
     void	makeSound(void) const ;
     const std::string	&getType(void) const ;
};

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance );
#endif
