#pragma once

#include <string>

class Contact {
private:
  std::string m_first_name;
  std::string m_last_name;
  std::string m_nickname;
  std::string m_phone_nb;
  std::string m_dark_secret;

public:
  Contact() = default;

  Contact(std::string m_first_name, std::string m_last_name,
          std::string m_nickname, std::string m_phone_nb,
          std::string m_dark_secret);
};
