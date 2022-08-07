#ifndef WRONGCAT_CLASS
#define WRONGCAT_CLASS

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public Animal
{
  public:
    WrongCat(void);
    WrongCat(const WrongCat &copy);
    virtual ~WrongCat(void);
    virtual void makeSound(void) const;
};

#endif
