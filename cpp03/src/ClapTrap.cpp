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

ClapTrap::~ClapTrap(void) { std::cout << "Destructor called" << std::endl; };

int ClapTrap::getHp(void) { return hp_; }
void ClapTrap::setHp(int points) { hp_ += points; }

int ClapTrap::getEp(void) { return ep_; }
void ClapTrap::setEp(int points) { ep_ += points; }

int ClapTrap::getAd(void) { return ad_; }
void ClapTrap::setAd(int points) { ad_ += points; }

void ClapTrap::attack(const std::string &target) {
  if (ep_ > 0 && hp_ > 0) {
    std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing "
              << ad_ << " points of damage." << std::endl;
  } else {
    std::cout << "ClapTrap can't attack right now." << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (amount >= 0) {
    std::cout << "ClapTrap " << name_ << " takes " << amount
              << " points of damage." << std::endl;
    hp_ -= amount;
  } else {
    throw std::runtime_error("Damage amount shouldn't be less than 0");
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "ClapTrap " << name_ << " repaires for " << amount
            << " hit points." << std::endl;
  if (amount >= 0) {
    hp_ += amount;
  } else {
    throw std::runtime_error("Healing amount shouldn't be less than 0");
  }
}
