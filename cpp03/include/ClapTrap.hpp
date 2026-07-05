#pragma once
#include <string>

class ClapTrap {
protected:
  std::string name_;
  int hp_ = 10;
  int ep_ = 10;
  int ad_ = 0;

public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &src);
  ClapTrap &operator=(const ClapTrap &src);
  ~ClapTrap(void);

  int getHp(void);
  void setHp(int points);

  int getEp(void);
  void setEp(int points);

  int getAd(void);
  void setAd(int points);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
