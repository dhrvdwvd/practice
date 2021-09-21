#include<iostream>
using namespace std;
void swap_by_reference_var(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main(){
  int a, b;
  cout<< "Enter two integers to be swapped: "<<endl;
  cin>>a>>b;
  cout<< "Numbers entered: a = "<<a<< " and b = "<<b<<endl;
  swap_by_reference_var(a, b);
  cout<< "After swapping,\n";
  cout<< "a = "<<a<< " and b = "<<b<<endl;  
  return 0;
}