#ifndef MONEY_H
#define MONEY_H
#include <iostream>
//need to figure out a way to prevent exposing the cent variable here
//TODO: implement overloaded operators
class Money {
  private:
    int m_dollars;
    int m_cents;

  public:
    Money();
    Money(int dollars, int cents);

    void operator- ();
    void operator+ (const Money& newMoney);
    void operator=(const Money& newMoney);
    bool operator< (const Money& comparison);
    bool operator> (const Money& comparison);
    friend std::ostream& operator<< (std::ostream& os, const Money& money);
};

#endif
