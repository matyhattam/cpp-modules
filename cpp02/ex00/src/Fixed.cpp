#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  value_ = 0;
}
Fixed::Fixed(const Fixed &src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}
Fixed &Fixed::operator=(const Fixed &src) {
  std::cout << "Copy assignement constructor called" << std::endl;
  if (this != &src) {
    value_ = src.value_;
  }
  return *this;
}

Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const { return value_; }
void Fixed::setRawBits(const int raw) { value_ = raw; }
