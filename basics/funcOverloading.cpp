#include <iostream>
using namespace std;

int sum(int a,int b){
  return a+b;
}
int sum(int a,int b,int c){
  return a+b+c;
}
int vol(double r, int h){
  return (3.14*r*r*h);
}
int vol(int a){
  return (a*a*a);
}
int vol(int l,int b,int h){
  return (l*b*h);
}
 
int main(){
 cout <<"sum of 3 & 6 id "<<endl<<sum(3,6)<<endl;
 cout <<"sum of 3 ,7 & 6 id "<<endl<<sum(3,6,7)<<endl;
 cout <<"vol of cuoboid 3 ,7 & 6 id "<<endl<<vol(3,6,7)<<endl;
 cout <<"vol of cylinder 3  & 6 id "<<endl<<vol(3,6)<<endl;
 cout <<"vol of cube 3  id "<<endl<<vol(3)<<endl;
  return 0;
}