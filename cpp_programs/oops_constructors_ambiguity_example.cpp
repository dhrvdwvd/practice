#include<iostream>
using namespace std;
/***************************************************************
* Case1:                                                       *
* class B: public A {};                                        *
* A() is constructed first then B().                           *
*                                                              *
* Case2:                                                       *
* class C: public A, public B {};                              *
* A() first, then B(), then C().                               *
*                                                              *
* Case3:                                                       *
* class C: public A, virtual public B {};                      *
* B() first, then A(), and then C().                           *
***************************************************************/
class Base1{
	protected:  // In this code, since we are not handling data1
		int data1;// or data2, data3 outside class, it could
	public:        //might as well be private.
		Base1(int i){
			data1 = i;
			cout << "Base1 constructor called.\n";
		}
		void showData1(){
			cout << "data1 = " << data1 << endl;
		}
};
class Base2{
	protected:
		int data2;
	public:
		Base2(int i){
			data2 = i;
			cout << "Base2 constructor called.\n";
		}
		void showData2(){
			cout << "data2 = " << data2 << endl;
		}
};
class Derived: public Base1, public Base2{
	protected:
		int data3;
	public:
		Derived(int a, int b, int c): Base1(a), Base2(b){
			data3 = c;
			cout << "Derived constructor called.\n";
		}
		void showAll(){
			showData1();
			showData2();
			cout << "data3 = " << data3 << endl;
		}
};
int main(){
	Derived d(1,2,3);
	d.showAll();
	return 0;
}