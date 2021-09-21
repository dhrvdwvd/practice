#include<iostream>
using namespace std;
class complexNo
{
	int a, b;
public:
	complexNo(void);  // declaring a constructor
	void setNo(int a1, int a2){
		a = a1;
		b = a2;
	}
	void showNo(void){
		cout<< "Complex number is: "<<a<< " + "<<b<< "i"<<endl;
	}
};
complexNo :: complexNo(void){
	a = 0;
	b = 0;
}
int main(){
  complexNo a1;
  a1.showNo();
  return 0;
}
/**********************************************************
* Constructors is a special member function that has the  *
* same name as the class.  It automatically initializes   *
* private members of the class whenever any object of the *
* class is invoked.                                       *
* Constructors that do not take any parameters are called *
* default constructors, such as for this program.         *
* Should be declared in the public section of the class   *
* definition.                                             *
* They do not return any values.                          *
* Their addresses cannot be referred.                     *
**********************************************************/