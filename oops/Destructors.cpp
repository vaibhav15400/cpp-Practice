#include <iostream>
using namespace std;

int count = 0;
class Num
{

public:
  Num()
  {
    count++;
    cout << "this is time constructor called " << count << endl;
  }
  ~Num()
  {
    cout << "this is time destructor called " << count << endl;
    count--;
  }
};
int main()
{
  cout << "******************DESTRUCTORS******************" << endl;
  cout << "creating two objects " << endl;
  Num n1;
  {
    cout << "Block enter" << endl;

    cout << "creating two more objects" << endl;
    Num n2, n3;
    cout << "Block exit " << endl;
  }
  cout << "back to main " << endl;
  return 0;
}