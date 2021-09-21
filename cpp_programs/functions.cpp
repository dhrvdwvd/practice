#include<iostream>
using namespace std;
int product(int, int);
void greeter();
int main(){
  int a, b;
  cout<< "Enter two numbers: "<<endl;
  cin>>a>>b;
  cout<< "You entered: "<<a<< " and "<<b<<endl;
  greeter();
  cout<< "Product of these numbers: "<<product(a,b)<<endl;
  return 0;
}
int product(int a, int b){
	return a*b;
}
void greeter(){
	cout<< "\nHello there!  Have a good day."<<endl;
}