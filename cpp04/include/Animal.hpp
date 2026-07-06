#pragma once
#include <string>

class Animal {
protected:
  std::string type_;

public:
  Animal(void);
  Animal(std::string type);
  Animal(const Animal &src);
  Animal &operator=(const Animal &src);
  ~Animal(void);
  void makeSound();
};
