#include "Fixed.hpp"
#include <iostream>

int main() {
  Fixed i = Fixed(5);
  std::cout << i.getRawBits() << std::endl;
  std::cout << i.toInt() << std::endl;
  Fixed f = Fixed(5.65f);
  std::cout << f.getRawBits() << std::endl;
  std::cout << f.toFloat() << std::endl;
  std::cout << i << " " << f << std::endl;
}
