#include "Contact.hpp"
#include "utils.hpp"
#include <PhoneBook.hpp>
#include <iostream>

int main() {
  PhoneBook pb;
  int choice;

  while (1) {
    std::cout << "Awesome PhoneBook!" << std::endl;
    std::cout << "What do you want to do ?" << std::endl;
    std::cout << "1 - ADD" << std::endl;
    std::cout << "2 - SEARCH" << std::endl;
    std::cout << "3 - EXIT" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
      Contact ct;
      saveInput("First Name", ct);
      saveInput("Last Name", ct);
      saveInput("Nickname", ct);
      saveInput("Phone Number", ct);
      saveInput("Dark Secret", ct);
      pb.addContact(ct);

    } else if (choice == 2) {
      pb.displayAllContacts();
      int i;
      std::cout << "Chose an entry :" << std::endl;
      std::cin >> i;
      if (i >= 0 && i <= 7)
        pb.displayContact(i);

    } else if (choice == 3) {
      return 0;
    } else {
      std::cout << "Chose between 1 and 3! Exiting prog" << std::endl;
      return 0;
    }
  }
}
