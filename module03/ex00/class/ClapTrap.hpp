#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
  private:
    std::string   _name;
    unsigned int  _hitpoint;
    unsigned int  _energypoint;
    unsigned int  _attackdamage;

  public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap& content);
    // getteur
    int get_hit(void) const;
    int get_energy(void) const;
    int get_attackdamage(void) const;
    // setteur
    void set_name(std::string newname);
    void set_hit(unsigned int nbr);
    void set_energy(unsigned int nbr);
    void set_damage(unsigned int nbr);
} ;

#endif
