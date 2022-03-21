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