#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ClapTrap cp1("Matycp");
  ClapTrap cp2("Maevacp");

  cp1.attack("Maevacp");
  cp2.takeDamage(cp1.getAd());
  cp2.beRepaired(2);

  ScavTrap robot("Bob");
  robot.attack("enemy");
  robot.takeDamage(5);
  robot.beRepaired(3);
  robot.guardGate();
}
