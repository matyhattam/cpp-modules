class Fixed {
private:
  int value_;
  static const int fractionalBits_ = 8;

public:
  Fixed() = default;
  ~Fixed(void);
  Fixed(const Fixed &src);
  Fixed &operator=(const Fixed &src);

  int getRawBits(void) const;
  void setRawBits(const int raw);
};
