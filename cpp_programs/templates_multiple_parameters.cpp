#include<iostream>
using namespace std;
/********************************************************************
* template <class T1=defParamtr,class T2=defPrmtr>                  *
* class NameofClass{                                                *
*	T1 data1;                                                       *
*	T2 data2;                                                       *
* };                                                                *
* In the above defParamtr is default parameter, which is used if no *
* data type is provided.                                            *
*********************************************************************/
template <class T1, class T2>
class Class{
	T1 data1;
	T2 data2;
	public:
		Class(T1 a=0, T2 b=0){
			data1 = a;
			data2 = b;
		}
		void display(){
			cout << data1 << " " << data2;
		}
};
int main(){
	Class <float, char>Object(1.25, 'd');
	Object.display();
	return 0;
}