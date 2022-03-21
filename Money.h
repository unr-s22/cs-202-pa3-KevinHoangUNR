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

    Money operator- ();
    Money operator+ ();
    Money operator< (const Money* comparison);
    Money operator> (const Money* comparison);
    Money operator<< (const Money* money);
};