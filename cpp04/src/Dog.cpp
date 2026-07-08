#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(std::string name) : Animal("Dog") {
  std::cout << "Parametric constructor for Dog called" << std::endl;
  name_ = name;
}

Dog::Dog(const Dog &src) : Animal(src.type_) {
  std::cout << "Copy constructor for Dog called" << std::endl;
  *this = src;
}

Dog &Dog::operator=(const Dog &src) {
  std::cout << "Copy constructor for Dog called" << std::endl;
  if (this != &src) {
    *this = src;
  }
  return *this;
}

Dog::~Dog(void) { std::cout << "Destructor for Dog called" << std::endl; }

void Dog::makeSound(void) { std::cout << "Wouf" << std::endl; }
