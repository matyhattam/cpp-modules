#include <iostream>
#include <string>

int ft_strlen(std::string str) {
  int i = 0;

  while (str[i])
    i++;

  return i;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "LOUD AND UNBEARABLE FEEDBACK \n";
    return 0;
  }

  std::string input = argv[1];

  for (int i = 0; i < (int)input.length(); i++)
    if (input[i] >= 'a' && input[i] <= 'z')
      input[i] -= 32;

  std::cout << input << '\n';

  return 0;
}