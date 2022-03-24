#include "Account.h"

Account::Account(Money* initialBalance) {
  balance.push_back(initialBalance);
}

void Account::makeDeposit(Money* deposit) {
  balance.push_back(deposit);
  isBalanceUpdated = false;
  numDeposits++;
}

void Account::makeWithdrawals(Money* withdrawal) {
  withdrawal->operator-();
  balance.push_back(withdrawal);
  isBalanceUpdated = false;
  numWithdrawals++;
}

