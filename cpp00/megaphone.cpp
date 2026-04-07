#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "LOUD AND UNBEARABLE FEEDBACK" << std::endl;
    return 0;
  }

  for (int i = 1; argv[i] != NULL; i++) {
    for (int j = 0; argv[i][j]; j++)
      if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
        argv[i][j] = std::toupper(argv[i][j]);

    std::cout << argv[i];
  }
  std::cout << std::endl;

  return 0;
}
