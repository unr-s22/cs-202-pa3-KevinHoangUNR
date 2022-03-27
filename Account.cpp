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
  Money newAction = withdrawal.operator-();
  balance.push_back(newAction);
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
  Money holderVal;
  tos << "Account Details" << std::endl;
  tos << "-------------------------" << std::endl;
  tos << "Current Balance: " << /*account.getBalance() << */ std::endl;
  tos << "-------------------------" << std::endl;
  tos << "Number of Deposits: " << account.numDeposits << std::endl;
  tos << "---------------------" << std::endl;
  for (auto& depo: account.balance) {
    if (Money(0,0) < depo) {
      tos << "(" << counter << ") " << depo << std::endl;
      counter++;
    }
  }
  counter = 1;
  tos << "-------------------------" << std::endl;
  tos << "Number of Withdrawals: " << account.numWithdrawals << std::endl;
  tos << "-------------------------" << std::endl;
  for (auto& withdr: account.balance) {
    if (Money(0,0) > withdr) {
      //holderVal = -withdr;
      tos << "(" << counter << ") " << withdr /*This should be holderVal */ << std::endl;
      counter++;
    }
  }

  os << tos.str();
  return os;
}
