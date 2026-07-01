#include <fstream>
#include <iostream>

int main() {
  std::fstream file("file.txt");
  std::string s1 = "Hello Maty";
  std::string s2 = "Hello Quentin";

  if (!file) {
    std::cout << "The file doesn't exist";
    return 1;
  }
  file << s1;

  std::fstream new_file("new_file.txt");
  new_file << s1 << " " << s1 << " " << s1;

  std::ifstream new_file("new_file.txt");
}
