#include<iostream>
using namespace std;
int volume(float r, int h){
	cout<< "using pi*r*r*h ";
	return 3.14159*r*r*h;
}
int volume(int a){
	cout<< "using side**3 ";
	return a*a*a;
}
int volume(int l, int b, int h){
	cout<< "using l*b*h ";
	return l*b*h;
}
int main(){
  cout<< "Volume of a cylinder (r = 3, h = 4) is "<<volume(3.0,4)<<endl;
  cout<< "Volume of a cube (a = 4) is "<<volume(4)<<endl;
  cout<< "Volume of a cuboid (l = 3, b = 4, h = 5) is "<<volume(3,4,5)<<endl;
  return 0;
}
/**********************************************************
*  This program demonstrates how C++ can, on the basis of *
*  number and type of arguments can recognize the correct *
*  function (out of same named functions).  This is known *
*  as *function overloading*.                             *
**********************************************************/