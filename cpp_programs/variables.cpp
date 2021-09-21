#include<iostream>
int g=33;  // global variable
using namespace std;
int main(){
  int a=3,b=90,g=11;
  float pi=3.141593;
  char c = 'h';
  bool is_True = true;
  cout<<"Two variables in this program: a = "<<a<<" and b = "<<b;
  cout<<"\nPi is equal to "<<pi;
  cout<<"\nc is a character: "<<c;
  cout<< "\nIn C++, local variable takes precdence over global variable, g = "<<g;
  cout<< "\nBoolean variable: is_True returns either 0 or 1 as: "<<is_True;
  return 0;
}