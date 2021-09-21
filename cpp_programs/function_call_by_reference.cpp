#include<iostream>
using namespace std;
void swap_without_temp(int* a,int* b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main(){
  int a;
  int b;
  cout<< "Enter two numbers to be swapped (without temp):"<<endl;
  cin>>a>>b;
  cout<< "You entered: "<<a<< " and "<<b<<endl;
  swap_without_temp(&a, &b);
  cout<< "Swapped!  Now b = "<<b<< " and a = "<<a<<endl;
  return 0;
}