#include <iostream>
using namespace std;
int main(){
  int a=3;
  int *b=&a;
  cout<<&a<<endl;
  cout<<b<<endl;
  cout<<*b<<endl;

  //pointer to pointer

  int **c=&b;
  cout<<c<<endl;
  cout<<**c<<endl;
  cout<<*c;

  return 0;
}