#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
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
    std::vector<Money*> balance;
    bool isBalanceUpdated;
    int lastKnownBalance;
    int numWithdrawals;
    int numDeposits;

  public:
    Account(Money*);
    void makeDeposit(Money*);
    void makeWithdrawals(Money*);
    int getBalance();
};

#endif
