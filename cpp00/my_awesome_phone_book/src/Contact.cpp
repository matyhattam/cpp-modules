#include "Contact.hpp"

Contact::Contact()
    : m_first_name{""}, m_last_name{""}, m_nickname{""}, m_phone_nb{""},
      m_dark_secret{""} {}

Contact::Contact(std::string first_name, std::string last_name,
                 std::string nickname, std::string phone_nb,
                 std::string dark_secret)
    : m_first_name{first_name}, m_last_name{last_name}, m_nickname{nickname},
      m_phone_nb{phone_nb}, m_dark_secret{dark_secret} {}
