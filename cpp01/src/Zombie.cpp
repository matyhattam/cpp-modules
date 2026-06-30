#include "Zombie.hpp"
#include <array>

Zombie::Zombie(std::string name) { name_ = name; }

void Zombie::announce() { std::cout << name_ << ": Braiiiiiinnnzzz..."; }

Zombie *newZombie(std::string name) { return new Zombie(name); }

std::string Zombie::getName(void) { return name_; }
void Zombie::setName(std::string name) { name_ = name; }

Zombie::~Zombie(void) { std::cout << name_ << " has been deleted."; }

void randomChump(std::string name) {
  Zombie zb = Zombie(name);
  zb.announce();
};

Zombie *zombieHorde(int N, std::string name) {
  Zombie *horde = new Zombie[N];

  for (int i = 0; i < N; i++) {
    horde[i].setName(name);
  }

  return horde;
};
