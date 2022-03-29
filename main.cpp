#include <iostream>
#include "Account.h"
#include "Money.h"

int main() {
  //Setting up and displaying the initial account
  Account account(Money(300,23));
  account.calculateBalance();
  std::cout << account << std::endl;

  //Depositing into the account (Output should = $1301.69)
  account.makeDeposit(Money(200,00));
  account.makeDeposit(Money(300,24));
  account.makeDeposit(Money(501,22));
  account.calculateBalance();
  std::cout << account << std::endl;

  //Withdrawing from the account (Output should = $800.25)
  account.makeWithdrawal(Money(300,10));
  account.makeWithdrawal(Money(201,34));
  account.calculateBalance();
  std::cout << account << std::endl;

  //Showing that operators work
  std::cout << "***************************" << std::endl;
  std::cout << "Showing that operators work" << std::endl;
  std::cout << "***************************" << std::endl << std::endl;
  Money val1(200,10);
  Money val2(100,40);
  Money val3(100,80);

  if (val1 > val2) {
    std::cout << val1 << " is greater than " << val2 << std::endl;
  }
  else if (val1 < val2) {
    std::cout << val1 << " is less than " << val2 << std::endl;
  }
  else {
    std::cout << "Error in eval" << std::endl;
  }

  if (val2 > val3) {
    std::cout << val2 << " is greater than " << val3 << std::endl;
  }
  else if (val2 < val3) {
    std::cout << val2 << " is less than " << val3 << std::endl;
  }
  else {
    std::cout << "Error in eval" << std::endl;
  }
}
