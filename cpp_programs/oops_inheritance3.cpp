#include<iostream>
using namespace std;

/*************************************************************************************
*                                                                                    *
*  Base class members	Public derivation	Private derivation	Protected Derivation *
*  		Private			Not inherited		Not inherited		Not inherited        *
*		Public			Public				Private				Protected            *
*		Protected		Protected			Private				Protected            *
*                                                                                    *
*************************************************************************************/

class Base{
	protected:
	int a;
	private:
	int b;
};
class Derived : protected Base{
	
};
int main(){
	Base b;
	cout<<b.a;  // Protected members also cannot be accessed directly.
	return 0;
}