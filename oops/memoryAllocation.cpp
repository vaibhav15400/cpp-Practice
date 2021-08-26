#include <iostream>
using namespace std;

class Shop
{
  int itemId[100];
  int itemPrice[100];
  int counter;

public:
  void initCounter(void) { counter = 0; }
  void setPrice(void);
  void displayPrice(void);
};

void Shop::setPrice(void)
{
  cout << "Enter the id of item " << counter + 1 << endl;
  cin >> itemId[counter];
  cout << "Enter the Price of item" << endl;
  cin >> itemPrice[counter];
  counter++;
}

void Shop::displayPrice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
  }
}

int main()
{
  cout << "Memory Allocation Objects" << endl;
  Shop D;
  D.initCounter();
  D.setPrice();
  D.setPrice();
  D.setPrice();
  D.displayPrice();
  return 0;
}