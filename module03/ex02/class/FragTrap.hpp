#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

#include <iostream>
#include "../class/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    virtual ~FragTrap(void);
    void highFivesGuys(void);
    void attack(const std::string& target);
} ;

#endif
