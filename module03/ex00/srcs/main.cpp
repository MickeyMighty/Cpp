
#include "../class/ClapTrap.hpp"

int main( void ) {
  int i = 0;
  ClapTrap  pokemon1("Magikarp");
  ClapTrap  pokemon2("Squirtle");
  ClapTrap  pokemon3("Pikachu");

  std::cout << "hitpoints: " << pokemon1.get_hit() << std::endl;
 std::cout << "energyPoints: " << pokemon1.get_energy() << std::endl;
 std::cout << "attackDamage: " << pokemon1.get_attackdamage() << std::endl;
  pokemon1.attack("Squirtle");
  pokemon2.takeDamage(0);
  pokemon1.set_damage(10);
  pokemon1.attack("Squirtle");
  pokemon2.takeDamage(10);
  pokemon2.beRepaired(2);
  pokemon2.attack("Magikarp");

  pokemon3.set_damage(1);
  while (i < 11)
  {
    pokemon3.attack("Magikarp");
    pokemon1.takeDamage(2);
    pokemon1.beRepaired(1);
    i++;
  }
  return 0;
}
