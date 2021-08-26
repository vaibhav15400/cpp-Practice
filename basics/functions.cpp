#include <iostream>
using namespace std;
 

 int sum(int a,int b){
  int c=a+b;
  return c;
} 


int main(){
  int num1,num2;
  cout<<"Enter first number"<<endl;
  cin>>num1>>num2;
  cout<<"the sum of given numbers is "<<sum(num1,num2);
  return 0;
} 

