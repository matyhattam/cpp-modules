#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  // Cat maty("Maty");
  // maty.makeSound();

  // Dog maeva("Maeva");
  // maeva.makeSound();

  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete meta;
  delete i;
  delete j;
  return 0;
}
