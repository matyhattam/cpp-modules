#include "Fixed.hpp"
#include <cmath>
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
Fixed::Fixed(const int in) {
  std::cout << "Int constructor called" << std::endl;
  value_ = in << fractionalBits_;
}
Fixed::Fixed(const float fl) {
  std::cout << "Float constructor called" << std::endl;
  value_ = roundf(fl * (1 << fractionalBits_));
}
Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const { return value_; }
void Fixed::setRawBits(const int raw) { value_ = raw; }

float Fixed::toFloat(void) const {
  return (float)value_ / (1 << fractionalBits_);
}
int Fixed::toInt(void) const { return value_ >> fractionalBits_; }

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return os;
}

bool Fixed::operator<(const Fixed &src) const {
  return value_ < src.getRawBits();
}
bool Fixed::operator>(const Fixed &src) const {
  return value_ > src.getRawBits();
}
bool Fixed::operator<=(const Fixed &src) const {
  return value_ <= src.getRawBits();
}
bool Fixed::operator>=(const Fixed &src) const {
  return value_ >= src.getRawBits();
}
bool Fixed::operator!=(const Fixed &src) const {
  return value_ != src.getRawBits();
}

Fixed Fixed::operator+(const Fixed &src) const {
  return value_ + src.getRawBits();
}
Fixed Fixed::operator-(const Fixed &src) const {
  return value_ - src.getRawBits();
}
Fixed Fixed::operator*(const Fixed &src) const {
  Fixed result;
  long long rawBits = ((long long)value_ * src.getRawBits()) >> fractionalBits_;
  result.setRawBits((int)rawBits);
  return result;
}
Fixed Fixed::operator/(const Fixed &src) const {
  if (src.getRawBits() != 0) {
    Fixed result;
    long long rawBits =
        ((long long)value_ << fractionalBits_) / src.getRawBits();
    result.setRawBits((int)rawBits);
    return result;
  }
  throw std::runtime_error("Division by 0");
}

Fixed &Fixed::operator++() {
  ++value_;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  ++value_;
  return tmp;
}

Fixed &Fixed::operator--() {
  --value_;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  --value_;
  return tmp;
}
