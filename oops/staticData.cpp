#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count;

public:
  void setData(void)
  {
    cout << "enter the id" << endl;
    cin >> id;
    count++;
  }
  void getdata(void)
  {
    cout << "the employee id is " << id << endl
         << " the employee number ::++> " << count << endl;
  }
  static void getCount(void)
  {
    cout << "The valyue of count is" << count << endl;
  }
};

int Employee::count;

int main()
{
  cout << "Static Data Members and Methods" << endl;

  Employee Vaibhav, abc, def;
  Vaibhav.setData();
  Vaibhav.getdata();

  Employee::getCount();
  abc.setData();
  abc.getdata();
  Employee::getCount();

  def.setData();
  def.getdata();
  Employee::getCount();

  return 0;
}