#pragma once

#include <Contact.hpp>
#include <array>
#include <string>

#define MAX_CONTACTS 8

class PhoneBook {
private:
  std::array<Contact, MAX_CONTACTS> m_contacts;
  int m_count;

public:
  PhoneBook();

  void addContact(const Contact &contact);
  void displayContacts() const;
};
