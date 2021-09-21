#include<iostream>
using namespace std;
/***************************************************************
* Syntax for initialization list of a constructor:             *
* constructor (arguments) : initialization-list  {             *
*      some-code;                                              *
* }                                                            *
*                                                              *
* class Test{                                                  *
*	int a;                                                     *
*	int b;                                                     *
* 	public:		                                               *
* 		Test(int i, int j): a(i), b(j){                        *
*			constructor-code                                   *
*		}                                                      *
* };                                                           *
***************************************************************/
class Test{
	int a;
	int b;
	public:
		// Test(int i, int j): a(i), b(j){  // Will run
		// Test(int i, int j): a(i+b), b(j){  // Won't run
		Test(int i, int j): a(i), b(j+a){  // Will run
			cout << "Constructor executed.\n";
			cout << "a = "<< a << ", b = " << b << endl;
		}
}; // a is declared first in the definition of the class,
//    so one can use a for modifying b but not vice versa.        
int main(){
	Test t1(2,3);
	return 0;
}