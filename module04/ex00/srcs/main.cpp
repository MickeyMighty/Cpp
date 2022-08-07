#include "../class/Animal.hpp"
#include "../class/WrongAnimal.hpp"
#include "../class/Cat.hpp"
#include "../class/Dog.hpp"
#include "../class/WrongCat.hpp"

int main()
{
  const Animal* animal = new Animal();
  const Animal* Dog = new Dog();
  const Animal* Cat = new Cat();
  std::cout << Dog->getType() << " " << std::endl;
  std::cout << Cat->getType() << " " << std::endl;
  Cat->makeSound(); //will output the cat sound!
  j->makeSound();
  animal->makeSound();

  delete animal;
  delete dog;
  delete cat;
  delete wrong_cat;
  delete wrong_animal;
  return 0;
}
