#include <iomanip>
#include <iostream>

void displayLine(std::string str) {
  std::string s = str.size() > 10 ? str.substr(0, 9) + "…" : str;
  std::cout << std::setw(10) << std::left << s;
  std::cout << '|';
}
