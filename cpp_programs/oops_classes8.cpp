#include<iostream>
using namespace std;
class complexNo;  // Forward declaration
class calculator
{
	public:
		int sumReal(complexNo, complexNo);  //compiler knows nothing about
		int sumIm(complexNo, complexNo);  //complexNo class' members here.
}
class complexNo
{
	int a;  // Real part
	int b;  // Complex part
	// Individual methods of calculator class are friends.
	friend int calculator :: sumReal(complexNo, complexNo);
	friend int calculator :: sumIm(complexNo, complexNo);
	
	// Declaring entire class as a friend.
	friend class calculator;
	
	public:
		void setNo(int v1, int v2){
			a = v1;
			b = v2;
		}
		friend complexNo sumcomplexNos(complexNo a1, complexNo a2);
		void showNo(void){
			cout<<a<< " + "<<b<< "i"<<endl;
		}
};
int calculator :: sumReal(complexNo o1, complexNo o2){
	return (o1.a + o2.a);
}
int calculator :: sumIm(complexNo o1, complexNo o2){
	return (o1.b + o2.b);
}
int main(){
  complexNo A1, A2, A3;
  calculator calc;
  int x, y;
  cout<< "Real part of A1: ";
  cin>>x;
  cout<< "Imaginary part of A1: ";
  cin>>y;
  cout<< "You entered: "<<x<< " and "<<y<<endl;
  A1.setNo(x,y);
  A1.showNo();
  cout<< "Real part of A2: ";
  cin>>x;
  cout<< "Imaginary part of A2: ";
  cin>>y;
  cout<< "You entered: "<<x<< " and "<<y<<endl;
  A2.setNo(x,y);
  A2.showNo();
  cout<< "Summing the above complex numbers."<<endl;
  A3.setNo(calc.sumReal(A1, A2), calc.sumIm(A1. A2));
  A3.showNo();
  return 0;
}
/**********************************************************
* To permit usage of private members of a class, we need  *
* to mention the friend functions/methods/classes in the  *
* definition of a class, only friend functions can access *
* the private members of a class.  sumReal etc.  cannot   *
* access a and b by default, however, making it a friend  *
* allows this.  Declarations of friend funcitons etc. can *
* be done in the private or public sections of the class. *
**********************************************************/