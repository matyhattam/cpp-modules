#include "Animal.hpp"
#include <string>

class Cat : public Animal {
protected:
  std::string name_;

public:
  Cat(void);
  Cat(std::string name);
  Cat(const Cat &src);
  Cat &operator=(const Cat &src);
  ~Cat(void);
  void makeSound() const;
};
