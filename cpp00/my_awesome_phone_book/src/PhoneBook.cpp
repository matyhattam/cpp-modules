#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : m_count{0} {}

void PhoneBook::addContact(const Contact &contact) {
  if (m_count < MAX_CONTACTS)
    m_contacts[m_count++] = contact;
  else {

    std::cout
        << "Phonebook is full, replacing the last contact with the new one."
        << std::endl;
    m_contacts[MAX_CONTACTS - 1] = contact;
  }
}

void PhoneBook::displayContacts() const {
  for (int i = 0; i < MAX_CONTACTS; i++) {
    m_contacts[i].display();
    std::cout << "-------------------------" << std::endl;
  }
};
