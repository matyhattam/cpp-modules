#include <Weapon.hpp>
#include <iostream>
#include <string>

class HumanA {
private:
  std::string name_;
  Weapon weapon_;

public:
  HumanA() = default;
  HumanA(std::string name, Weapon weapon);
  ~HumanA(void);

  std::string getName(void);
  void setWeaponType(std::string type);

  void attack(void);
};
