#include<iostream>
using namespace std;
int c = 33;
int main(){
  int a, b, c;
  float d = 3.4;  // f is added to a decimal point number to signify that it is a float.
  float & e = d;  // e is a reference variable which *points* to d.  Like a shortcut.
  cout<< "Enter two integers: "<<endl;
  cin>>a>>b;
  cout<< "You entered: "<<a<< " and "<<b<<endl;
  c = a + b;
  cout<< "Local variable c is: "<<c<<endl;
  cout<< "whereas global c is : "<<::c<<endl;
  cout<< "\n\nSize of 34.4 is "<<sizeof(34.4)<<endl;
  cout<< "Size of 34.4f is "<<sizeof(34.4f)<<endl;
  cout<< "Size of 34.4F is "<<sizeof(34.4F)<<endl;
  cout<< "Size of 34.4l is "<<sizeof(34.4l)<<endl;
  cout<< "Size of 34.4L is "<<sizeof(34.4L)<<endl;
  return 0;
}

/**********************************************************
*  By default, any decimal point number in C++ is a dou-  *
*  ble data type.  To specify add a f or F to the end o-  *
*  f the number for float and l/L for long double.        *
*  These letters are called float, double, and long dou-  *
*  ble literals.                                          *
**********************************************************/