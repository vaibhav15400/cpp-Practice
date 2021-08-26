#include <iostream>
using namespace std;

void swapPointer(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void swapRefVar(int &a, int &b){
  int temp=a;
  a=b;
  b=temp;
}
 
int main(){
  int a=4,b=5;
  cout<<"Call by value and refernce"<<endl;

/***********Call By Reference Pointer*****************/
  cout<<"value of a "<<a<<endl;
  cout<<"value of b "<<b<<endl<<endl;
  swapPointer(&a,&b);
  cout<<"value of a "<<a<<endl;
  cout<<"value of b "<<b<<endl;  
/***********************************************/

/*********Call By Reference variable**********/
  cout<<"value of a "<<a<<endl;
  cout<<"value of b "<<b<<endl<<endl;
  swapRefVar(a,b);
  cout<<"value of a "<<a<<endl;
  cout<<"value of b "<<b<<endl;  
 /*
 *********Call By Value*************
 */
  
  return 0;
}