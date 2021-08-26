#include <iostream>
using namespace std;

class Y;
class X
{
  int data;

public:
  void setValue(int value)
  {
    data = value;
  }
  friend void add(X, Y);
};
class Y
{
  int num;
  friend void add(X, Y);

public:
  void setValue(int value)
  {
    num = value;
  }
};

void add(X o1, Y o2)
{
  cout << "Summing Datas of X and Y objects Gives Me "
       << o1.data + o2.num << endl;
}
int main()
{
  X a;
  Y b;
  a.setValue(3);
  b.setValue(15);
  add(a, b);
  return 0;
}