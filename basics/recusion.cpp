#include <iostream>
using namespace std;

// int factorial(int n){
//   if (n<=1)
//   {
//     return 1;
//   }
  
//   cout<<"the number is "<<n<<endl;
//   return n*factorial(n-1);
// }
int fabonaci(int n){
  if(n<2){return 1;}
  
  return fabonaci(n-2)+fabonaci(n-1);
}
 
int main(){
  //factorial of a number
  cout<<"enter the number"<<endl;
  int a;
  cin>> a;
  cout<<endl<<fabonaci(a);

  return 0;
}