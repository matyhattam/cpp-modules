#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
  name_ = name, weapon_ = weapon;
};

std::string HumanA::getName(void) { return name_; };
void HumanA::setWeaponType(std::string type) { weapon_.setType(type); };

void HumanA::attack(void) {
  std::cout << name_ << " attacks with their weapon " << weapon_.getType()
            << std::endl;
};

HumanA::~HumanA(void) {};
