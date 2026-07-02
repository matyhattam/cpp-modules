#include "Harl.hpp"
#include <iostream>

void Harl::debug_(void) {
  std::cout
      << R"("DEBUG" level: Debug messages contain contextual information. They are mostly
used for problem diagnosis.
Example: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-
ketchup burger. I really do!")"
      << std::endl;
};

void Harl::info_(void) {
  std::cout
      << R"("INFO" level: These messages contain extensive information. They are helpful for
tracing program execution in a production environment.
Example: "I cannot believe adding extra bacon costs more money. You didn’t put
enough bacon in my burger! If you did, I wouldn’t be asking for more!")"
      << std::endl;
};

void Harl::warning_(void) {
  std::cout
      << R"("WARNING" level: Warning messages indicate a potential issue in the system.
However, it can be handled or ignored.
Example: "I think I deserve to have some extra bacon for free. I’ve been coming for
years whereas you started working here since last month.")"
      << std::endl;
};

void Harl::error_(void) {
  std::cout
      << R"("ERROR" level: These messages indicate an unrecoverable error has occurred.
This is usually a critical issue that requires manual intervention.
Example: "This is unacceptable! I want to speak to the manager now.")"
      << std::endl;
};

std::string loggingLevels[] = {"debug", "info", "warning", "error"};

void Harl::complain(std::string level) {
  void (Harl::*loggingFunctions[])(void) = {&Harl::debug_, &Harl::info_,
                                            &Harl::warning_, &Harl::error_};

  for (int i = 0; i < 4; i++) {
    if (level == loggingLevels[i]) {
      (this->*loggingFunctions[i])();
    }
  }
}
Harl::~Harl(void) {};
