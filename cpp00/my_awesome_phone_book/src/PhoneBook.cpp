#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_count{0} {}

void PhoneBook::addContact(const Contact &contact) {
  if (m_count < MAX_CONTACTS)
    m_contacts[m_count++] = contact;
  else
    m_contacts[7] = contact;
}
