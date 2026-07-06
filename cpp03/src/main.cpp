#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ClapTrap cp1("Matycp");
  ClapTrap cp2("Maevacp");

  cp1.attack("Maevacp");
  cp2.takeDamage(cp1.getAd());
  cp2.beRepaired(2);

  ScavTrap scav("Bob");
  scav.attack("enemy");
  scav.takeDamage(5);
  scav.beRepaired(3);
  scav.guardGate();

  FragTrap frag("Jim");
  frag.attack("enemy");
  frag.takeDamage(5);
  frag.beRepaired(3);
  frag.highFiveGuys();

  DiamondTrap diamond("Diamond");
  diamond.attack("Jim");
  diamond.takeDamage(5);
  diamond.beRepaired(5);
  diamond.whoAmI();
}
