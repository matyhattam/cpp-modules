#include <Contact.hpp>
#include <PhoneBook.hpp>

int main() {
  PhoneBook pb;

  pb.addContact(Contact("maty", "hattam", "titi", "0661328874", "rien"));
  pb.displayContacts();
}
