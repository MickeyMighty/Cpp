#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

#include <iostream>
#include "../class/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);
    virtual ~ScavTrap(void);
    void guardGate(void);
    void attack(const std::string& target);
} ;

#endif
