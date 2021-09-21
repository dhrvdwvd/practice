#include<iostream>
using namespace std;
class Base1{
	protected:
		int base1int;
	public:
		void set_base1int(int a){
			base1int = a;
		}
};
class Base2{
	protected:
		int base2int;
	public:
		void set_base2int(int a){
			base2int = a;
		}
};
class Derived : public Base1, public Base2{
	public:
		void show(){
			cout << "base1int = " << base1int << endl;
			cout << "base2int = " << base2int << endl;
			cout << "Their sum = " << (base1int + base2int) << endl;
		}
};
/********************************************************************
* Derived class has the following members (Multiple Inheritance):   *
* Data members:                                                     *
* 	protected --> base1int, base2int                                *
* Member functions:                                                 *
* 	public --> set_base1int(), set_base2int(), show()               *
********************************************************************/
int main(){
	Derived dhruv;
	dhruv.set_base1int(22);
	dhruv.set_base2int(3);
	dhruv.show();
	return 0;
}