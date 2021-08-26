#include <iostream>
using namespace std;

inline int product(int a, int b){

  return a*b;
}

float  moneyRev(int currmoney, float interest=1.04){
  return currmoney*interest;
}
 
int main(){
  int a,b;
  /*
  cout<<"enter the value of a and b";
  cin>>a>>b;
  cout<<"value of a is " << a<< endl << "value of b is " <<b<<endl;
   cout<<product(a,b)<<endl;*/
  int money=100000;
  cout<<"if you have "<<money<<" Rs in your account you will get "<<moneyRev(money)<< " Rs after 1year" <<endl;
  cout<<"for VVIP: if you have "<<money<<" Rs in your account you will get "<<moneyRev(money,1.10)<< " Rs after 1year" <<endl;
 
  return 0;
}  