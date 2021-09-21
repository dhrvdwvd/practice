#include<iostream>
using namespace std;
class complexNo
{
	int a, b;
public:
	complexNo(int, int);  // declaring a constructor with parameters.
	void setNo(int a1, int a2){
		a = a1;
		b = a2;
	}
	void showNo(void){
		cout<< "Complex number is: "<<a<< " + "<<b<< "i"<<endl;
	}
};
complexNo :: complexNo(int x, int y){
	a = x;
	b = y;
}
int main(){
  complexNo a1(1,2);  // Implicit call
  complexNo b1 = complexNo(2,3);  // Explicit call
  a1.showNo();
  b1.showNo();
  return 0;
}
