#include "HumanB.hpp"

HumanB::HumanB(std::string name) { name_ = name; };

std::string HumanB::getName(void) { return name_; };
void HumanB::setWeapon(Weapon weapon) { weapon_ = weapon; };
void HumanB::setWeaponType(std::string type) { weapon_.setType(type); };

void HumanB::attack(void) {
  std::cout << name_ << " attacks with their weapon " << weapon_.getType()
            << std::endl;
};

HumanB::~HumanB(void) {};
