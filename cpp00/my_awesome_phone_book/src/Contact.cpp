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

void Contact::displayContactInfo() const {
  std::cout << m_first_name << std::endl;
  std::cout << m_last_name << std::endl;
  std::cout << m_nickname << std::endl;
  std::cout << m_phone_nb << std::endl;
  std::cout << m_dark_secret << std::endl;
}

int Contact::setFirstName(const std::string &fname) {
  m_first_name = fname;
  return 0;
};
int Contact::setLastName(const std::string &lname) {
  m_last_name = lname;
  return 0;
};
int Contact::setNickname(const std::string &nname) {
  m_nickname = nname;
  return 0;
};
int Contact::setPhoneNb(const std::string &pnbr) {
  m_phone_nb = pnbr;
  return 0;
};
int Contact::setDarkSecret(const std::string &secr) {
  m_dark_secret = secr;
  return 0;
};
