#include "Zombie.hpp"

int main() {
  Zombie zb_maty = Zombie("maty");
  zb_maty.announce();

  Zombie *zb_quentin = newZombie("quentin");

  randomChump("Maeva");

  delete zb_quentin;
}
