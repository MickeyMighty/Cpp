#include "../class/ClapTrap.hpp"

ClapTrap::ClapTrap():  _name("no name"), _hitpoint(10), _energypoint(10), _attackdamage(0)
{
  std::cout << "\033[1;32mConstructor has been called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitpoint(10), _energypoint(10), _attackdamage(0)
{
  std::cout << "\033[1;32mConstructor has been called\033[0m" << std::endl;
  this->_name = name;
}

ClapTrap::~ClapTrap()
{
  std::cout << "\033[1;32mDestructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
  std::cout << "\033[1;32mCopy constructor called\033[0m" << std::endl;
  *this = copy;
}

void  ClapTrap::attack(const std::string& target)
{
  if (this->_hitpoint == 0)
    std::cout << this->_name << "\033[1;34m is K.O. \033[0m" \
    << this->_name << "\033[1;34m can't do nothing right now.\033[0m" << std::endl;
  else if (this->_energypoint == 0)
    std::cout << this->_name << "\033[1;34m is out of energy\033[0m" \
    << std::endl;
  else {
    if (this->_attackdamage == 0 && this->_energypoint > 0) {
      std::cout << this->_name << \
      "\033[1;34m attacks on " << target << "\033[1;34m causing " << \
      this->_attackdamage \
      << "\033[1;34m points of damage!\nBut nothing happened! Doesn't seem very effective...\033[0m" \
      << std::endl;
    }
    else if (this->_attackdamage > 0 && this->_energypoint > 0) {
      std::cout << this->_name << \
      "\033[1;34m attacks \033[0m" << target << "\033[1;34m causing \033[0m" << \
      this->_attackdamage << "\033[1;34m points of damage!\033[0m" << std::endl;
    }
    this->_energypoint -= 1;
    if (this->_energypoint > 0)
      std::cout << this->_name << "\033[1;34m have \033[0m" << this->_energypoint \
      << "\033[1;34m energy point.\033[0m" << std::endl;
    else if (this->_energypoint == 0)
      std::cout << this->_name << "\033[1;34m is out of energy\033[0m"<< std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hitpoint == 0) {
    std::cout << this->_name << "\033[1;34m is K.O.\033[0m" << this->_name \
    << "\033[1;34m can't do nothing right now.\033[0m" <<std::endl;
    return ;
  }
  if (amount > this->_hitpoint)
    amount = this->_hitpoint;
  this->_hitpoint -= amount;
  if (this->_hitpoint == 0)
    std::cout << this->_name << "\033[1;34m is K.O.\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_hitpoint == 0)
    std::cout << this->_name << "\033[1;34m is K.O. \033[0m" \
    << this->_name << "\033[1;34m can't do nothing right now.\033[0m" \
    << std::endl;
  else if (this->_energypoint == 0)
    std::cout << this->_name << "\033[1;34m is out of energy\033[0m"<< std::endl;
  else
  {
    this->_hitpoint += amount;
    this->_energypoint -= 1;
    std::cout << this->_name << "\033[1;34m is repaired of \033[0m" << amount \
    << "\033[1;34m point(s) !\033[0m" << std::endl;
  }
}

// getteur

int ClapTrap::get_hit(void) const
{
  return (this->_hitpoint);
}

int ClapTrap::get_energy(void) const
{
  return (this->_energypoint);
}

int ClapTrap::get_attackdamage(void) const
{
  return (this->_attackdamage);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& content)
{
    std::cout << "\033[1;32mCopy assignment operator called\033[0m" << std::endl;
    if (this != &content)
    {
      this->_name = content._name;
      this->_hitpoint = content._hitpoint;
      this->_energypoint = content._energypoint;
      this->_attackdamage = content._attackdamage;
    }
    return (*this);
}
// setteur

void  ClapTrap::set_name(std::string newname)
{
  std::cout << this->_name << " \033[1;32m change name for \033[0m" << newname << std::endl;
  this->_name = newname;
}

void ClapTrap::set_hit(unsigned int nbr)
{
  std::cout << this->_name << " \033[1;32mset hit point at \033[0m" << nbr << std::endl;
  this->_hitpoint = nbr;
}

void ClapTrap::set_energy(unsigned int nbr)
{
  std::cout << this->_name << " \033[1;32mset energy point at \033[0m" << nbr << std::endl;
  this->_energypoint = nbr;
}

void ClapTrap::set_damage(unsigned int nbr)
{
  std::cout << this->_name << " \033[1;32mset attack damage at \033[0m" << nbr << std::endl;
  this->_attackdamage = nbr;
}
