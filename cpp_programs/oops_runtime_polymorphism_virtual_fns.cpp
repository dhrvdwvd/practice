#include<iostream>
using namespace std;
class BaseClass{
	public:
		int base_variable=1;
		virtual void display(){  // adding virtual overrides the default behavior.
			cout << "1 base_variable = " << base_variable << endl;
		}
};
class DerivedClass : public BaseClass{
	public:
		int derived_variable=2;
		void display(){
			cout << "2 derived_variable = " << derived_variable << endl;
			cout << "2 base_variable = " << base_variable << endl;
		}
};
// Address of a function is associated with an object during
// runtime.  Virtual function is used to override the default
// choice when same name function is present (polymorphism).
int main(){
	BaseClass * base_class_pointer;
	DerivedClass derived_class_object;
	base_class_pointer = &derived_class_object;
	base_class_pointer->display();
	return 0;
}
// Virtual functions cannot be static, should only be accessed by
// pointers, can be a friend of other class. 