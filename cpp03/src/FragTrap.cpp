#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
  std::cout << "Default FragTrap constructor called" << std::endl;
  name_ = "Frag Doe";
  hp_ = 100;
  ep_ = 100;
  ad_ = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(std::move(name)) {
  std::cout << "Parametric FragTrap constructor called" << std::endl;
  hp_ = 100;
  ep_ = 100;
  ad_ = 30;
};

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
  if (ep_ > 0 && hp_ > 0) {
    std::cout << "FragTrap " << name_ << " attacks " << target << ", causing "
              << ad_ << " points of damage." << std::endl;
  } else {
    std::cout << "FragTrap can't attack right now." << std::endl;
  }
}

void FragTrap::highFiveGuys(void) {
  std::cout << "FragTrap is asking for a joyful High Five." << std::endl;
}
