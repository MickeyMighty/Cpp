#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

#include "../class/ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);
    ~ScavTrap(void);
    void guardGate(void);
    void attack(const std::string& target);
} ;

#endif
