#include <iostream>
using namespace std;
int main(){
  cout<<"Array"<<endl;
  int marks[4];
  int n,i;
  i=0;
  
  cin>>n;
  for (i = 0; i < n; i++)
  {
  cin>>marks[i];
  cout<<marks[i]<<endl;
  }
  /*
 while (i<n)
 {
   cin>>marks[i];
   cout<<marks[i]<<endl;
   i++;
 }
do
{ 
   cin>>marks[i];
   cout<<marks[i]<<endl; 
  //  i++;
} while (i<n);*/
  return 0;
}