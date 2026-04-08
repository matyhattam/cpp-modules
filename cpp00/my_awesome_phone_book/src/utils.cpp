#include "Contact.hpp"
#include <iomanip>
#include <iostream>

void displayLine(std::string str) {
  std::string s = str.size() > 10 ? str.substr(0, 9) + "…" : str;
  std::cout << std::setw(10) << std::left << s;
  std::cout << '|';
}

int saveInput(std::string f_name, Contact &contact) {
  std::string field;

  if (f_name == "First Name") {
    std::cout << f_name << " : ";
    std::cin >> field;
    contact.setFirstName(field);
  } else if (f_name == "Last Name") {
    std::cout << f_name << " : ";
    std::cin >> field;
    contact.setLastName(field);
  } else if (f_name == "Nickname") {
    std::cout << f_name << " : ";
    std::cin >> field;
    contact.setNickname(field);
  } else if (f_name == "Phone Number") {
    std::cout << f_name << " : ";
    std::cin >> field;
    contact.setPhoneNb(field);
  } else if (f_name == "Dark Secret") {
    std::cout << f_name << " : ";
    std::cin >> field;
    contact.setDarkSecret(field);
  } else {
    saveInput(f_name, contact);
  }

  return 1;
}
