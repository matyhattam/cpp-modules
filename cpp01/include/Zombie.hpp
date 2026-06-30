#pragma once
#include <iostream>
#include <string>

class Zombie {
private:
  std::string name_;

public:
  Zombie() = default;
  ~Zombie(void);

  Zombie(std::string name);

  void announce(void);

  std::string getName(void);
  void setName(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

Zombie *zombieHorde(int N, std::string name);
