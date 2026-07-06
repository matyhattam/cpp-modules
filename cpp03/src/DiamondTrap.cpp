#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
  std::cout << "Default Diamond constructor called" << std::endl;
  name_ = "Diamond Doe";
  ClapTrap::name_ = name_ + "Clap_name";
  FragTrap::hp_ = 100;
  ScavTrap::ep_ = 100;
  FragTrap::ad_ = 30;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
  std::cout << "Parametric Diamond constructor called" << std::endl;
  name_ = name;
  FragTrap::hp_ = 100;
  ScavTrap::ep_ = 100;
  FragTrap::ad_ = 30;
}

DiamondTrap::~DiamondTrap(void) {}
void DiamondTrap::whoAmI() {
  std::cout << "My name " << name_ << std::endl;
  std::cout << "My father's name " << FragTrap::name_ << std::endl;
}
