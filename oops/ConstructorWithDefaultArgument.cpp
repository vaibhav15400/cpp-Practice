#include <iostream>
using namespace std;

class Simple
{
  int data1;
  int data2;
  int data3;

public:
  Simple(int a, int b = 9, int c = 10)
  {
    data1 = a;
    data2 = b;
    data3 = c;
  }
  void printData()
  {
    cout << "Your Data is :::::==>>> "
         << data1 << " & " << data2 << " & " << data3 << endl;
  }
};

int main()
{

  Simple s(1, 7, 9);
  s.printData();
  return 0;
}