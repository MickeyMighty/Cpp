#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <iostream>

class Animal
{
  protected:
    std::string type;

  public:
    Animal(void);
    ~Animal(void);
    Animal(const Animal &copy);
    Animal& operator=(const Animal& content);
    void makeSound(void) const;
    const std::string   &getType(void) const;
};

std::ostream  &operator<<(std::ostream &output, Animal const &Animal);

#endif
