#include <iostream>
using namespace std;

class Employee
{
  int id;
  int Salary;

public:
  void setId(void)
  {
    Salary = 122;
    cout << "Enter ID of employee" << endl;
    cin >> id;
  }
  void getId(void)
  {
    cout << "the id of this employee is " << id << endl;
  }
};

int main()
{
  cout << "Arrays of object" << endl;
  // Employee a, b, c, d;
  // a.setId();
  // a.getId();

  Employee FB[5];
  for (int i = 0; i < 5; i++)
  {
    FB[i].setId();
    FB[i].getId();
  }

  return 0;
}