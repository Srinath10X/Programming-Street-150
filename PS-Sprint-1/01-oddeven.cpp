#include <iostream>

int main(int argc, char *argv[]) {
  int num;
	std::cout << "Enter the number: ";
  std::cin >> num;
  if (num % 2 == 0) {
    std::cout << "Even" << std::endl;
  } else {
    std::cout << "Odd" << std::endl;
  }
  return 0;
}
