/**********************************************************
*  Types of header files:                                 *
*    -> System header files are provided by compiler.     *
*       For e.g. #include <iostream> etc.                 *
*    -> User defined header files are provided by user.   *
*       For e.g. #include "this.h"                        *
**********************************************************/
#include<iostream>
using namespace std;
int main(){
  int a=3,b=6;
  cout<< "Arithmetic operators:"<<endl;
  cout<< "Some arithmetic expressions follow. a = "<<a<<" and b = "<<b<<endl;
  cout<< "a + b = "<<a+b<<endl;
  cout<< "a - b = "<<a-b<<endl;
  cout<< "a * b = "<<a*b<<endl;
  cout<< "a / b = "<<a/b<<endl;
  cout<< "a % b = "<<a%b<<endl;
  cout<< "a++ prints "<<a++<<endl;
  cout<< "++a prints "<<++a<<endl;
  cout<< "a-- prints "<<a--<<endl;
  cout<< "--a prints "<<--a<<endl;
  
  // other operators are assignment, relational, etc.
  return 0;
}