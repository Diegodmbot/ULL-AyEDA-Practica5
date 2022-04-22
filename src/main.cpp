#include <iostream>

#include "../include/Key.h"

int main() {
  std::cout << "Hello, World!" << std::endl;
  Key<int> key = 1;
  std::cout << key.getKey() << std::endl;
  return 0;
}
