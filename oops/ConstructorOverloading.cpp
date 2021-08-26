#include <iostream>
#include <iomanip>
using namespace std;

class Complex
{
  int a, b;

public:
  Complex()
  {
    a = 0;
    b = 0;
  }
  Complex(int x, int y)
  {
    a = x;
    b = y;
  };
  Complex(int x)
  {
    a = x;
    b = 0;
  }
  void printData()
  {
    cout << "Your Data is :::::==>>> "
         << a << " + " << b << setw(5) << "i" << endl;
  }
};

int main()
{
  Complex c1(4, 6);
  c1.printData();

  Complex c2(5);
  c2.printData();

  Complex c3;
  c3.printData();
  return 0;
}