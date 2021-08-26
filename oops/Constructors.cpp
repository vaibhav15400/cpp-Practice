#include <iostream>
// #include <iomanip>
using namespace std;

class Complex
{
  int a, b;

public:
  Complex(void);
  void printData()
  {
    cout << "Your Data is :::::==>>> "
         << a << " + " << b << "i" << endl;
  }
};
Complex ::Complex(void)
{
  a = 11;
  b = 51;
}

int main()
{
  cout << "CONSTRUCTORS" << endl;
  Complex c;
  c.printData();
  return 0;
}