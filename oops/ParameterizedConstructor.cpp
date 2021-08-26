#include <iostream>
using namespace std;

class Complex
{
  int a, b;

public:
  Complex(int, int);
  void printData()
  {
    cout << "Your Data is :::::==>>> "
         << a << " + " << b << "i" << endl;
  }
};
Complex ::Complex(int x, int y)
{
  a = x;
  b = y;
}

int main()
{
  int c, d;
  cout << "Parametrized " << endl;
  Complex a(4, 6);
  a.printData();
  cin >> c >> d;

  Complex b = Complex(c, d);
  b.printData();

  return 0;
}