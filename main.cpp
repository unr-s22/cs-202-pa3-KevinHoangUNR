#include <iostream>
#include "Account.h"
#include "Money.h"

int main() {
  Money m(100,91);
  Money n(36,9);
  Money x(76,45);
  Money y;

  y = m;
  m+n;
  std::cout << y << " + " <<  n << " = " << m << std::endl;
  Money z = m;
  m-x;
  std::cout << z << " - " <<  x << " = " << m << std::endl;
  


  //Showing that operators work
  std::cout << std::endl << "***************************" << std::endl;
  std::cout << "Showing that operators work" << std::endl;
  std::cout << "***************************" << std::endl;
  Money val1(200,10);
  Money val2(100,40);

  if (val1 > val2) {
    std::cout << val1 << " is greater than " << val2 << std::endl;
  }
  else {
    std::cout << val1 << " is less than " << val2 << std::endl;
  }
}
