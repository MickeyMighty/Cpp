#ifndef DOG_CLASS
#define DOG_CLASS

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
  public:
    Dog(void);
    Dog(const Dog &copy);
    virtual ~Dog(void);
    virtual void makeSound(void) const;
};

#endif
