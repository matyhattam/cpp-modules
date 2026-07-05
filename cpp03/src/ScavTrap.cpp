#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(move(name)) {
  std::cout << "ScavTrap constructor called" << std::endl;
  hp_ = 100;
  ep_ = 50;
  ad_ = 0;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap Destructor called" << std::endl;
};

void ScavTrap::attack(const std::string &target) {
  if (ep_ > 0 && hp_ > 0) {
    std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing "
              << ad_ << " points of damage." << std::endl;
  } else {
    std::cout << "ScavTrap can't attack right now." << std::endl;
  }
}
void ScavTrap::guardGate() {

  std::cout << "ScavTrap is now in GateKeeper mode." << std::endl;
}
