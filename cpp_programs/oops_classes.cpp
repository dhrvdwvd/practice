#include<iostream>
using namespace std;
class Employee
{
	private:
	  int a, b, c;
	public:
	  int d, e;
	  void setData(int a1, int b1, int c1);  // Just a declaration, defined later.
	  void showData(){
		  cout<< "a = "<<a<<endl;
		  cout<< "b = "<<b<<endl;
		  cout<< "c = "<<c<<endl;
		  cout<< "d = "<<d<<endl;
		  cout<< "e = "<<e<<endl;
	  }
};
// Scope resolution operator defines what a, b, and c in the
// following function refers to:
void Employee :: setData(int a1, int b1, int c1){
	a = a1;
	b = b1;
	c = c1;
}
// Only public variables can be set directly as d and e in this case.
// For a, b, c, one should use functions defined in public to set them.
int main(){
  Employee dhruv;
  dhruv.d = 33;
  dhruv.e = 95;
  dhruv.setData(34,534,23);
  dhruv.showData();
  return 0;
}