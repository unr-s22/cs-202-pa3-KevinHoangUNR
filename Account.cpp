#include "Account.h"

Account::Account(Money initialBalance) {
  lastKnownBalance = initialBalance;
}

void Account::makeDeposit(Money deposit) {
  balance.push_back(deposit);
  isBalanceUpdated = false;
  numDeposits++;
}

void Account::makeWithdrawal(Money withdrawal) {
  withdrawal.operator-();
  balance.push_back(withdrawal);
  isBalanceUpdated = false;
  numWithdrawals++;
}

Money Account::getBalance() {
  
  if (!isBalanceUpdated) {
    for(totalActions; totalActions < (numWithdrawals + numDeposits); totalActions++) {
      lastKnownBalance + balance[totalActions];
    }
  }
  return lastKnownBalance;
}

std::ostream& operator<< (std::ostream& os, const Account& account) {
  std::stringstream tos;
  int counter = 1;
  tos << "Account Details" << std::endl;
  tos << "-------------------------" << std::endl;
  tos << "Current Balance: " << /*account.getBalance() << */ std::endl;
  tos << "-------------------------" << std::endl;
  tos << "Number of Deposits: " << account.numDeposits << std::endl;
  tos << "---------------------" << std::endl;
  for (auto& depo: account.balance) {
    if (Money(0,0) < depo) {
      tos << "(" << counter << ") " << depo << std::endl;
    }
  }
  counter = 1;
  tos << "-------------------------" << std::endl;
  tos << "Number of Withdrawals: " << account.numWithdrawals << std::endl;
  for (auto& withdr: account.balance) {
    if (Money(0,0) > withdr) {
      //-withdr;
      tos << "(" << counter << ") " << withdr << std::endl;
    }
  }
  tos << "-------------------------" << std::endl;

  os << tos.str();
  return os;
}
