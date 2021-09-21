#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A & setData(int a){ // return data type: pointer.
			//a = a;  // This will compile but here both the a's are the
		            //  variable a defined in this scope, so runtime error.
			this->a = a; // 'this' is the pointer to the object of this class.
			             // Hence, this will work as it is supposed to.
			return *this; // returns a pointer 'this'.
		}
		void getData(){
			cout << "a = " << a << endl;
		}
};
int main (){
	A a;
	a.setData(30).getData();
	a.getData();
	
	return 0;
}