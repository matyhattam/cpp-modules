#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
private:
  std::string name_;

public:
  DiamondTrap(void);
  DiamondTrap(std::string name);
  ~DiamondTrap(void);
  using ScavTrap::attack;
  void whoAmI();
};
