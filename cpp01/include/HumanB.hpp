#include <Weapon.hpp>
#include <iostream>
#include <string>

class HumanB {
private:
  std::string name_;
  Weapon weapon_;

public:
  HumanB() = default;
  HumanB(std::string name);
  ~HumanB(void);

  std::string getName(void);
  void setWeapon(Weapon weapon);
  void setWeaponType(std::string type);

  void attack(void);
};
