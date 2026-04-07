#include <Contact.hpp>
#include <PhoneBook.hpp>

int main() {
  PhoneBook pb;
  Contact ct = Contact("maty", "hattam", "titi", "0661328874", "rien");

  pb.addContact(ct);
  pb.displayContacts();
}
