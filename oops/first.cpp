#include <iostream>
using namespace std;
 

 class employeee
 {
 private:
   int a,b,c;
 public:
  int d,e;
  void setData(int a1, int b1,int c1);
  void getData(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
  };
 };
 void employeee::setData(int a1, int b1,int c1)
 {
   a=a1;
   b=b1;
   c=c1;

 }
 
 
 
int main(){
  cout<<endl<<"Object Oriented Programing"<<endl;
  employeee Vaibhav;
  Vaibhav.d=30;
  Vaibhav.e =12;
  Vaibhav.setData(1,2,4);
  Vaibhav.getData();
  return 0;
} 