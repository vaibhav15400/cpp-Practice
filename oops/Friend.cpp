#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
  int add(int a, int b)
  {
    return a + b;
  }
  int sumRealComplex(Complex, Complex);
  int sumCompComplex(Complex, Complex);
};

class Complex
{
  int a, b;
  // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
  // friend int Calculator::sumCompComplex(Complex o1, Complex o2);
  friend class Calculator;

public:
  void
  setNumber(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  void PrintNumber()
  {
    cout << "Your Number Is \t" << a << " + " << b << " i" << endl;
  }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
  return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
  return (o1.b + o2.b);
}

int main()
{
  Complex o1, o2;
  o1.setNumber(1, 4);
  o2.setNumber(5, 7);
  Calculator calc;
  int result = calc.sumRealComplex(o1, o2);
  int resultComp = calc.sumCompComplex(o1, o2);
  cout << "The sum of real parts of o1 & o2 is " << result << endl;
  cout << "The sum of real parts of o1 & o2 is " << resultComp << endl;
  return 0;
}