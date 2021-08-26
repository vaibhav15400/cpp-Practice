#include <bits/stdc++.h>
using namespace std;

int firstDigit(int n)
{
  int digits = (int)log10(n);

  n = (int)(n / pow(10, digits));

  return n;
}

// Find the last digit
int lastDigit(int n)
{
  return (n % 10);
}

int main()
{

  int result1 = 0;
  int Array[1000];
  int Size_Of_array;
  cin >> Size_Of_array;
  for (int i = 0; i < Size_Of_array; i++)
  {
    cin >> Array[i];
  }

  for (int i = 0; i < Size_Of_array / 2; i++)
  {
    result1 = (result1 * 10) + firstDigit(Array[i]);
  }

  for (int i = (Size_Of_array / 2); i < Size_Of_array; i++)
  {
    result1 = (result1 * 10) + lastDigit(Array[i]);
  }
  result1 % 11 == 0 ? cout << ("OUI") : cout << ("NON");
  return 0;
}