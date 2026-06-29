#include "Zombie.hpp"

Zombie::Zombie(std::string name) { name_ = name; }

void Zombie::announce() { std::cout << name_ << ": Braiiiiiinnnzzz..."; }

Zombie *newZombie(std::string name) { return new Zombie(name); }

std::string Zombie::getName(void) { return name_; }

Zombie::~Zombie(void) { std::cout << name_ << " has been deleted."; }

void randomChump(std::string name) {
  Zombie zb = Zombie(name);
  zb.announce();
};
