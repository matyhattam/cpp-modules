#include "Weapon.hpp"
#include <string>

std::string Weapon::getType(void) { return type_; };
void Weapon::setType(std::string type) { type_ = type; };

Weapon::~Weapon(void) {};
