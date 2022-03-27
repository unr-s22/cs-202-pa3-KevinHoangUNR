#include "Money.h"

Money::Money(int dollars, int cents) {
  m_dollars = dollars;
  m_cents = cents;
}

Money::Money() {
  m_dollars = 0;
  m_cents = 0;
}

Money Money::operator-() {
 
  return Money(m_dollars * -1, m_cents * -1);
}

void Money::operator+(const Money& newMoney) {
  m_cents += newMoney.m_cents;
  if (m_cents >= 100) {
    m_cents -= 100;
    m_dollars ++;
  }
  m_dollars += newMoney.m_dollars;
}

void Money::operator=(const Money& newMoney) {
  m_cents = newMoney.m_cents;
  m_dollars = newMoney.m_dollars;
}

bool Money::operator<(const Money& comparison) {
  if (m_dollars < comparison.m_dollars) {
    return true;
  } else if (m_dollars == comparison.m_dollars && m_cents < comparison.m_cents) {
    return true;
  }
  return false;
}

bool Money::operator>(const Money& comparison) {
  if (m_dollars > comparison.m_dollars) {
    return true;
  } else if (m_dollars == comparison.m_dollars && m_cents > comparison.m_cents) {
    return true;
  }
  return false;
}

std::ostream& operator<<(std::ostream& os, const Money& money) {
  if (money.m_cents < 10) {
    os << "$" << money.m_dollars << ".0" << money.m_cents;
  }
  else
    os << "$" << money.m_dollars << "." << money.m_cents;
  return os;
}
