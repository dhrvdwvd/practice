#include<iostream>
using namespace std;
int main(){
  int a[]={2,3,55,73};
  int* b = a;
  a[2] = 43;
  for(int i=0;i<4;i++){
    cout<< "Element "<<i<< " is: "<<a[i]<<endl;
	cout<< "Pointers_"<<i<< ": "<<*(b+i)<<endl;
  }
  return 0;
}