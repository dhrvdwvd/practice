#include<iostream>
using namespace std;
/***************************************************************
* Resolving constructor ambiguity:                             *
* ------------------------------------------------------------ *
* If base class constructor has no arguments, there is no need *
* of any constructor in derived class.                         *
*                                                              *
* But if there is one or more arguments in base class constru- *
* ctor, then we need to pass arguments to the base class cons. *
*                                                              *
* If both base and derived class have constructors, then base  *
* class constructor is executed first.                         *
*                                                              *
* In multiple inheritance, base classes are constructed in the *
* order in which they appear in the class declaration.         *
*                                                              *
* In multilevel inheritance, constructors are executed in the  *
* order of inheritance.                                        *
*                                                              *
* There is also a special syntax supported by C++ which allows *
* to set each variable inherited.                              *
*                                                              *
* The constructors for virtual base classes are executed first *
* before an non-virtual class.                                 *
*                                                              *
* In case of multiple virtual classes, then the order in which *
* they are called in the order declared.                       *
*                                                              *
* First, virtual base classes are constructed (if present), t- *
* hen if not present, non-virtual base classes are constructed *
***************************************************************/
int main(){
	
	return 0;
}