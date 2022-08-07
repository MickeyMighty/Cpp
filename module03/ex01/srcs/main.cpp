
#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"

int main( void ) {
  int i = 0;
  ClapTrap  pokemon1("Magikarp");
  ScavTrap  pokemon2("Squirtle");
  ScavTrap  pokemon3("Pikachu");

  std::cout << "hitpoints: " << pokemon2.get_hit() << std::endl;
 std::cout << "energyPoints: " << pokemon2.get_energy() << std::endl;
 std::cout << "attackDamage: " << pokemon2.get_attackdamage() << std::endl;
  pokemon1.attack("Squirtle");
  pokemon2.takeDamage(0);
  pokemon1.set_damage(10);
  pokemon1.attack("Squirtle");
  pokemon2.takeDamage(10);
  pokemon2.beRepaired(2);
  pokemon2.attack("Magikarp");
  pokemon2.guardGate();
  pokemon3.set_damage(1);
  while (i < 11)
  {
    pokemon3.attack("Magikarp");
    pokemon2.takeDamage(2);
    pokemon2.beRepaired(1);
    i++;
  }
  std::cout << "hitpoints: " << pokemon3.get_hit() << std::endl;
  std::cout << "energyPoints: " << pokemon3.get_energy() << std::endl;
  std::cout << "attackDamage: " << pokemon3.get_attackdamage() << std::endl;
  return 0;
}
