#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) { type_ = type; };
std::string Weapon::getType(void) { return type_; };
void Weapon::setType(std::string type) { type_ = type; };

Weapon::~Weapon(void) {};
