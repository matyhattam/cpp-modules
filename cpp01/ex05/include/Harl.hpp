#include <string>

class Harl {
private:
  void debug_(void);
  void info_(void);
  void warning_(void);
  void error_(void);

public:
  Harl() = default;
  ~Harl(void);
  void complain(std::string level);
};
