#include<iostream>
using namespace std;
class base1{
	public:
		void greet(){
			cout << "How are you?\n";
		}
};
class base2{
	public:
		void greet(){
			cout << "How do you do?\n";
		}
};
class Derived : public base1, public base2{
	public:
		void greet(){
			base1 :: greet();  // This here resolves the ambiguity
		}                      // faced by Derived class.
};
class b{
	public:
		void say(){
			cout << "Hello world.\n";
		}
};
class d : public b{
	public:
		void say(){
			cout << "Hello hello.\n";
		}
};
// In the above two classes, d inherits from b, however,
// both b and d have say() member function. In this case, 
// if both are called, then their respective functions 
// will be run.  That is b.say will output Hello world, 
// whereas, d.say will output Hello hello.
int main(){
	base1 base1obj;
	base2 base2obj;
	b B;
	d D;
	Derived derivedobj;
	cout << "Base 1 greeting:\n";
	base1obj.greet();
	cout << "\nBase 2 greeting: \n";
	base2obj.greet();
	cout << "\nDerived (base 1 resolved) greeting: \n";
	derivedobj.greet();
	cout << "\nB and D's greeting (single inheritance.\n";
	B.say();
	D.say();
}