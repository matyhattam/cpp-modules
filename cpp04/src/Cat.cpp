#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
  std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(std::string name) : Animal("Cat") {
  std::cout << "Parametric constructor for Cat called" << std::endl;
  name_ = name;
}

Cat::Cat(const Cat &src) : Animal(src.type_) {
  std::cout << "Copy constructor for Cat called" << std::endl;
  *this = src;
}

Cat &Cat::operator=(const Cat &src) {
  std::cout << "Copy constructor for Cat called" << std::endl;
  if (this != &src) {
    *this = src;
  }
  return *this;
}

Cat::~Cat(void) { std::cout << "Destructor for Cat called" << std::endl; }

void Cat::makeSound(void) const { std::cout << "Miaou" << std::endl; }
