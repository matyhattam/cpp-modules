#include "Zombie.hpp"

int main() {
  Zombie zb_maty = Zombie("maty");
  zb_maty.announce();

  Zombie *zb_quentin = newZombie("quentin");

  randomChump("Maeva");

  delete zb_quentin;

  Zombie *horde = zombieHorde(10, "test");
  horde->announce();

  for (int i = 0; i < 10; i++) {
    horde->announce();
  }

  delete[] horde;
}
