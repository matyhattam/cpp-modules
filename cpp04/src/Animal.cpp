#pragma once
#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) {
  std::cout << "Default constructor for animal called" << std::endl;
}

Animal::Animal(std::string type) : type_(type) {
  std::cout << "Parametric constructor for animal called" << std::endl;
}

Animal::Animal(const Animal &src) {
  std::cout << "Copy constructor for animal called" << std::endl;
  *this = src;
}

Animal &Animal::operator=(const Animal &src) {
  std::cout << "Copy constructor for animal called" << std::endl;
  if (this != &src) {
    *this = src;
  }
  return *this;
}

Animal::~Animal(void) {
  std::cout << "Destructor for animal called" << std::endl;
}

void Animal::makeSound(void) { std::cout << "Some animal sound"; }
