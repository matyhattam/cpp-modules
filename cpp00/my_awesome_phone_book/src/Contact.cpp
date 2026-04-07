#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string first_name, std::string last_name,
                 std::string nickname, std::string phone_nb,
                 std::string dark_secret)
    : m_first_name{first_name}, m_last_name{last_name}, m_nickname{nickname},
      m_phone_nb{phone_nb}, m_dark_secret{dark_secret} {}

void Contact::display() const {
  std::cout << "First name: " << m_first_name << std::endl;
  std::cout << "Last name: " << m_last_name << std::endl;
  std::cout << "Nickname: " << m_nickname << std::endl;
  std::cout << "Phone number: " << m_phone_nb << std::endl;
  std::cout << "Dark secret: " << m_dark_secret << std::endl;
}
