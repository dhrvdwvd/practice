#include<iostream>
using namespace std;
inline int product1(int a, int b){
  return a*b;
}
inline int product2(int a, int b){
  static int c = 0;
  c = c + 1;
  return a*b + c;
}
float product3(int a, float b = 1.08){
	return a*b;
}
int main(){
  int a, b;
  cout<< "Enter two integers: ";
  cin>>a>>b;
  cout<< "You entered: "<<a<< " and "<<b<<endl;
  cout<< "Product of the numbers: "<<product1(a,b)<<endl;
  cout<< "Product of the numbers: "<<product1(a,b)<<endl;
  cout<< "Product of the numbers: "<<product1(a,b)<<endl;
  cout<< "Product of the numbers: "<<product1(a,b)<<endl;
  cout<< "Product of the numbers: "<<product1(a,b)<<endl;
  cout<< "Product2 of the numbers: "<<product2(a,b)<<endl;
  cout<< "Product2 of the numbers: "<<product2(a,b)<<endl;
  cout<< "Product2 of the numbers: "<<product2(a,b)<<endl;
  cout<< "Product2 of the numbers: "<<product2(a,b)<<endl;
  cout<< "Product2 of the numbers: "<<product2(a,b)<<endl;
  cout<< "Product3 of the numbers: "<<product3(a,b)<<endl;
  cout<< "Product3 of the numbers: "<<product3(a,b)<<endl;
  cout<< "Product3 of the numbers: "<<product3(a)<<endl;
  cout<< "Product3 of the numbers: "<<product3(a)<<endl;
  cout<< "Product3 of the numbers: "<<product3(a)<<endl;
  return 0;
}
/**********************************************************
*  Inline is added to those functions which are very si_  *
*  mple, as this helps replace the code with the actual   *
*  function definition when it is called anywhere.        *
*  Static variables are initialized only once.  In the    *
*  above code, static int c = 0 is only run once, when    *
*  the function runs for the first time.  For all other   *
*  calls, c is remembered by the function's stack, and    *
*  changes it value according to c = c + 1;               *
*  In product3 function, a default value is provided, in  *
*  case this default value stays constant for some a's    *
*  and changes for some.                                  *
**********************************************************/