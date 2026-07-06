#include "Animal.hpp"
#include <string>

class Dog : virtual public Animal {
protected:
  std::string name_;

public:
  Dog(void);
  Dog(std::string name);
  Dog(const Dog &src);
  Dog &operator=(const Dog &src);
  ~Dog(void);
  void makeSound();
};
