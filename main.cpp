#include <iostream>
#include "Account.h"
#include "Money.h"

int main() {
  Money m(100,93);
  std::cout << m << std::endl;
  -m;
  std::cout << m << std::endl;
}