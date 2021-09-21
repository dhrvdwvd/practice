#include<iostream>
using namespace std;
/**********************************************************
*  pointer is a data type which holds address of a memory *
*  location.  &: address of operator.  *: dereference op- *
*  erator.                                                *
**********************************************************/
int main(){
  int b = 45;
  int* a = &b;
  cout<< "Address of variable b using & operator: "<<&b<<endl;
  cout<< "Address of variable b using pointer   : "<<a<<endl;
  return 0;
}