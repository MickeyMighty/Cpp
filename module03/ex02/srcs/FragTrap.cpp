#include "../class/FragTrap.hpp"

FragTrap::FragTrap(void)
{
  std::cout << "\033[1;32mFragTrap Default Constructor has been called\033[0m" << std::endl;
  this->_name = "no name";
  this->_hitpoint = 100;
  this->_energypoint = 100;
  this->_attackdamage = 30;
}

FragTrap::FragTrap(std::string name)
{
  std::cout << "\033[1;32mFragTrap Constructor has been called\033[0m" << std::endl;
  this->_name = name;
  _hitpoint = 100;
  _energypoint = 100;
  _attackdamage = 30;
}

FragTrap::~FragTrap()
{
  std::cout << "\033[1;32mFragTrap Destructor of \033[0m" << this->_name << "\033[0m has been called\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
  std::cout << "\033[1;32mFragTrap Copy constructor called\033[0m" << std::endl;
  *this = copy;
}

void FragTrap::attack(const std::string& target)
{
  if (this->_hitpoint == 0)
    std::cout << this->_name << "\033[1;33m is K.O. \033[0m" \
    << this->_name << "\033[1;33m can't do nothing right now.\033[0m" << std::endl;
  else if (this->_energypoint == 0)
    std::cout << this->_name << "\033[1;33m is out of energy\033[0m" \
    << std::endl;
  else {
    if (this->_attackdamage == 0 && this->_energypoint > 0) {
      std::cout << "\033[1;33mFragTrap \033[0m" << this->_name << \
      "\033[1;33m attacks on \033[0m" << target << "\033[1;33m causing \033[0m" << \
      this->_attackdamage \
      << "\033[1;33m points of damage!\nBut nothing happened! Doesn't seem very effective...\033[0m" \
      << std::endl;
    }
    else if (this->_attackdamage > 0 && this->_energypoint > 0) {
      std::cout << "\033[1;33mFragTrap \033[0m" << this->_name << \
      "\033[1;33m attacks \033[0m" << target << "\033[1;33m causing \033[0m" << \
      this->_attackdamage << "\033[1;33m points of damage!\033[0m" << std::endl;
    }
    this->_energypoint -= 1;
    if (this->_energypoint > 0)
      std::cout << this->_name << "\033[1;33m have \033[0m" << this->_energypoint \
      << "\033[1;33m energy point.\033[0m" << std::endl;
    else if (this->_energypoint == 0)
      std::cout << this->_name << "\033[1;33m is out of energy\033[0m"<< std::endl;
  }
}

void FragTrap::highFivesGuys(void)
{
  std::cout << this->_name << "\033[1;33m want a high fives !\033[0m" << std::endl;
}
