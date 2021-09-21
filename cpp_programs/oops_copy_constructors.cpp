#include<iostream>
using namespace std;
class Number
{
	int a;
	public:
		Number(){
			a = 0;
		}
		Number(int num){
			a = num;
		}
/************* Copy constructor *****************/
		Number(Number & obj){
			cout<< "Copy constructor has been called."<<endl;
			a = obj.a;
		}
/************************************************/
		void DisplayNumber(void){
			cout<< "Number in this object is "<<a<<endl;
		}
};
int main(){
	Number x, y, z(3), z2;
	Number z1(z);
	z2 = z;
	x.DisplayNumber();
	y.DisplayNumber();
	z.DisplayNumber();
	z1.DisplayNumber();
	return 0;
}
/**********************************************************
* Copy constructor is used to create copy of an object.   *
* copy constructors make a copy of the object that is pa- *
* ssed to them.  In the above program z1 is a copy of z   *
* made by passing z through a copy constructor.           *
*                                                         *
* NOTE that compiler allocates a copy constructor for ev- *
* ery class when no copy constructor has been defined.    *
* The above program won't return any error even if copy   *
* constructor code is removed/commented.                  *
*                                                         *
* Copy constructor is only called when it is being made   *
* for the first time in main function.  For z1, it is ca- *
* lled, while for z2 it isn't called.
**********************************************************/