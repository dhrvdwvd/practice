#include<iostream>
using namespace std;
class Employee{
	int Id;
	static int count;  // This will be same for all the objects of class Employee.
	public:
	  void setId();
	  void getId();
	  static void getCount(void){
		  cout<< "Value of count is: "<<count<<endl;
	  }
};
void Employee :: setId(void){
	cout<< "Enter ID of employee number "<<count+1<< ": ";
	cin>>Id;
	count++;
}
void Employee :: getId(void){
	cout<< "ID of employee number "<<count<< " is "<<Id<<endl;
}

int Employee :: count;
int main(){
	Employee e1,e2,e3;
	e1.setId();
	e1.getId();
	Employee::getCount();
	
	e2.setId();
	e2.getId();
	Employee::getCount();
	
	e3.setId();
	e3.getId();
	Employee::getCount();
	return 0;
}
/**********************************************************
*  static ints are static data members which have only 1  *
*  copy for the entire program.  count here, is an static *
*  int member which is shared by all objects of class Em- *
*  ployee.  Similarly, we have static function members,   *
*  getCount in this program, which are only defined in    *
*  the context of a class, and can only interact with     *
*  static data members.                                   *
**********************************************************/