#include<iostream>
using namespace std;
class Employee
{
	public:
	int id;
	int salary;
	Employee(){}
	Employee(int i, int j=34){
		id = i;
		salary = j;
	}
};

/****** Syntax for inherited class *********************************
* class {{DerivedClassName}} : {{visibilityMode}} {{BaseClassName}}*
*    class members/methods/etc...                                  *
*                                                                  *
* ========= NOTE ============                                      *
* 1. Default visibility mode is private.
* 2. Private visibility mode: public members of the base class be- *
*    come private members of the derived class.                    *
* 3. Private members of base classes cannot be inherited.          *
* 4. Public visibility mode: public members of the base class bec- *
*    ome public members of the derived class.                      *
*******************************************************************/

class Programmer : Employee
{
	public:
		Programmer(int i){
			id = i;
		}
		int languageCode = 9;
		void getData(){
			cout<<id<<endl;
		}
	
};

int main(){
	Employee dhruv(1), harshit(2);
	cout<<dhruv.salary<<endl;
	cout<<harshit.salary<<endl;
	Programmer skillf(1);
	skillf.getData();
	return 0;
}