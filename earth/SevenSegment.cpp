#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  int t, number_of_matchsticks = 0;
  cin >> t;

  while (t--)
  {
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] - '0' == 0)
      {
        number_of_matchsticks += 6;
      }
      else if (s[i] - '0' == 1)
      {
        number_of_matchsticks += 2;
      }
      else if (s[i] - '0' == 2)
      {
        number_of_matchsticks += 5;
      }
      else if (s[i] - '0' == 3)
      {
        number_of_matchsticks += 5;
      }
      else if (s[i] - '0' == 4)
      {
        number_of_matchsticks += 4;
      }
      else if (s[i] - '0' == 5)
      {
        number_of_matchsticks += 5;
      }
      else if (s[i] - '0' == 6)
      {
        number_of_matchsticks += 6;
      }
      else if (s[i] - '0' == 7)
      {
        number_of_matchsticks += 3;
      }
      else if (s[i] - '0' == 8)
      {
        number_of_matchsticks += 7;
      }
      else if (s[i] - '0' == 9)
      {
        number_of_matchsticks += 6;
      }
      else
      {
        return 0;
      }
    }
    if (number_of_matchsticks % 2 == 0)
    {
      for (int j = 0; j < number_of_matchsticks / 2; j++)
        cout << "1";
      number_of_matchsticks = 0;
    }
    else
    {
      cout << "7"; //see note below
      for (int p = 1; p < (number_of_matchsticks - 1) / 2; p++)
        cout << "1";
      number_of_matchsticks = 0;
    }
    cout << endl;
  }
}