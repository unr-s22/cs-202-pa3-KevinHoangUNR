#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <sstream>
#include <vector>
#include "Money.h"

class Account {
  /**
   * A brief explanation of the Account interface:
   * 
   * Deposits and withdrawals, referred to here as "transactions" are stored in the vector balance. makeDeposit() and makeWithdrawal()
   * push a Money object to the back of the vector with makeWithdrawal() calling an (not yet implemented) overloaded (-) before pushing.
   * This then increments numTransactions. The plan is to adjust the isUpdated flag after a comparison made between numTransactions and 
   * lastUpdatedTransaction and determine whether to recalculate the balance. getBalance() will likely be calculated through iteration of 
   * balance.
   * 
   * TODO: this shit
   */
  private:
    std::vector<Money> balance;
    bool isBalanceUpdated;
    Money lastKnownBalance;
    int numWithdrawals = 0;
    int numDeposits = 0;
    int totalActions = 0;

  public:
    Account(Money);
    void makeDeposit(Money);
    void makeWithdrawal(Money);
    void calculateBalance();
    Money getBalance();
    friend std::ostream& operator<< (std::ostream& os, const Account& account);
};

#endif
