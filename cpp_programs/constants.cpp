#include<iostream>
#include<iomanip> // contains setw manipulator to set field width
using namespace std;
int main(){
  const float pi = 3.141593;
  int i=1, j=13, k=435;
  cout<< "Constant data type cannot be changed, here pi is a constant equal to "<<pi<<endl;
  cout<< "endl is a manipulator."<<endl;
  cout<< "i = "<<i<<endl;
  cout<< "j = "<<j<<endl;
  cout<< "k = "<<k<<endl;
  cout<< "i = "<<setw(3)<<i<<endl;
  cout<< "j = "<<setw(3)<<j<<endl;
  cout<< "k = "<<setw(3)<<k<<endl;
  return 0;
}