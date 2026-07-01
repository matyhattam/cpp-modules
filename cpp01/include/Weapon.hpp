#pragma once
#include <string>

class Weapon {
private:
  std::string type_;

public:
  Weapon() = default;
  ~Weapon(void);

  std::string getType(void);
  void setType(std::string type);
};
