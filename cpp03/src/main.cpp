#include "ClapTrap.hpp"

int main() {
  ClapTrap cp1("Matycp");
  ClapTrap cp2("Maevacp");

  cp1.attack("Maevacp");
  cp2.takeDamage(cp1.getAd());
  cp2.beRepaired(2);
}
