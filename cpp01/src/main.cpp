#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include "Zombie.hpp"

int main() {
  Zombie zb_maty = Zombie("maty");
  zb_maty.announce();

  Zombie *zb_quentin = newZombie("quentin");

  randomChump("Maeva");

  delete zb_quentin;

  // Zombie *horde = zombieHorde(10, "test");
  // horde->announce();

  // for (int i = 0; i < 10; i++) {
  //   horde->announce();
  // }

  // delete[] horde;

  HumanA h_maty = HumanA("maty", Weapon());
  h_maty.setWeaponType("hache");
  h_maty.attack();

  HumanB h_maeva = HumanB("maeva");
  h_maeva.setWeapon(Weapon());
  h_maeva.setWeaponType("Epée");
  h_maeva.attack();
}
