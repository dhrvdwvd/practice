#include<iostream>
using namespace std;
/**********************************************************
* Polymorphism                                            *
*   one name, multiple forms.                             *
*   e.g. function overloading, operator overloading.      *
*   Compile time polymorphsm: func/operator overloading.  *
*   Runtime polymo.: Virtual functions.                   *
*/
class BaseClass{
	public:
		int base_variable;
		void display(){
			cout << "base_variable = " << base_variable << endl;
		}
};
class DerivedClass : public BaseClass{
	public:
		int derived_variable;
		void display(){
			cout << "derived_variable = " << derived_variable << endl;
			cout << "base_variable = " << base_variable << endl;
		}
};
int main(){
	BaseClass * base_class_pointer;
	BaseClass base_class_object;
	DerivedClass derived_class_object;
	DerivedClass * derived_class_pointer;
	base_class_pointer = &derived_class_object;
	base_class_pointer->base_variable =23;
	// Pointer is of base class type but it points to object
	// of derived class.  base_class_pointer can only access
	// properties inherited by Derived class object from
	// base class.
	base_class_pointer->display();
	derived_class_pointer = &derived_class_object;
	derived_class_pointer->derived_variable=67;
	derived_class_pointer->display();
	// The above polymorphism is evaluated at runtime and it
	// depends on the type of pointer.
	return 0;
}