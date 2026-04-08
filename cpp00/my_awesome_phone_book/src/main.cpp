#include <Contact.hpp>
#include <PhoneBook.hpp>
#include <iostream>

std::string cin() {
  std::string str;

  return str;
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

int main() {
  PhoneBook pb;
  int choice;
  std::string lname;
  std::string nname;
  std::string pnbr;
  std::string secr;

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
  // Contact ct = Contact("maty", "hattam", "titi", "0661328874", "rien");

  // pb.addContact(ct);
  // pb.displayContacts();
}
