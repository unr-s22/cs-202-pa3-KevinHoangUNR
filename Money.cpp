#include "Money.h"

Money::Money(int dollars, int cents) {
  m_dollars = dollars;
  m_cents = cents;
}

Money::Money() {
  m_dollars = 0;
  m_cents = 0;
}

void Money::operator-() {
  m_dollars = -m_dollars;
  m_cents = -m_cents;
}

void Money::operator+() {

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
  os << "$" << money.m_dollars << "." << money.m_cents << std::endl;
  return os;
}