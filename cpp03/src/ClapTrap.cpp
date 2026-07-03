#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) {
  std::cout << "constructor called" << std::endl;
  name_ = name;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
  std::cout << "Copy assignment constructor called" << std::endl;
  if (this != &src) {
    *this = src;
  }
  return *this;
}

ClapTrap::~ClapTrap(void) { std::cout << "Destructor called"; };

int ClapTrap::getHp(void) { return hp_; }
void ClapTrap::setHp(int points) { hp_ += points; }

int ClapTrap::getEp(void) { return ep_; }
void ClapTrap::setEp(int points) { ep_ += points; }

int ClapTrap::getAd(void) { return ad_; }
void ClapTrap::setAd(int points) { ad_ += points; }

void ClapTrap::attack(const std::string &target) {
  if (ep_ > 0) {
  }
}
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);