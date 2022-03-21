#include "Account.h"

Account::Account(Money* initialBalance) {
  balance.push_back(initialBalance);
}

void Account::makeDeposit(Money* deposit) {
  balance.push_back(deposit);
  numTransactions++;
}

void Account::makeWithdrawals(Money* withdrawal) {
  balance.push_back(withdrawal);
  numTransactions++;
}

