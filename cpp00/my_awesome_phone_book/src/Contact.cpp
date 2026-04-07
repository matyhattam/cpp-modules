#include "Contact.hpp"
#include "utils.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(std::string first_name, std::string last_name,
                 std::string nickname, std::string phone_nb,
                 std::string dark_secret)
    : m_first_name{first_name}, m_last_name{last_name}, m_nickname{nickname},
      m_phone_nb{phone_nb}, m_dark_secret{dark_secret} {}

void Contact::display() const {
  displayLine(m_first_name);
  displayLine(m_last_name);
  displayLine(m_nickname);
}
