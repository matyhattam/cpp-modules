#pragma once
#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {

public:
  FragTrap(void);
  FragTrap(std::string name);
  ~FragTrap(void);
  void attack(const std::string &target);
  void highFiveGuys(void);
};
