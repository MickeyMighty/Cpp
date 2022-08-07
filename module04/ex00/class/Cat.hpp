#ifndef CAT_CLASS
#define CAT_CLASS

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
  public:
    Cat(void);
    Cat(const Cat &copy);
    virtual ~Cat(void);
    virtual void makeSound(void) const;
};

#endif
