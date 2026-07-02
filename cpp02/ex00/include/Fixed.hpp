#include <iostream>

class Fixed {
private:
  int value_;
  static const int fractionalBits_ = 8;

public:
  Fixed();
  ~Fixed(void);
  Fixed(const Fixed &src);
  Fixed &operator=(const Fixed &src);
  Fixed(const int in);
  Fixed(const float fl);

  int getRawBits(void) const;
  void setRawBits(const int raw);

  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
