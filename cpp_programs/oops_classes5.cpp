#include<iostream>
using namespace std;
class Employee
{
	int Id;
	float salary;
public:
	void setId(void){
		salary = 12.2;
		cout<< "Enter ID of employee ";
		cin>>Id;
	}
	void getId(void){
		cout<< "ID of this employee is "<<Id<<endl;
	}
};
int main(){
  Employee amazon[4];
  for(int i=0;i<4;i++){
	  amazon[i].setId();
	  amazon[i].getId();
  }
  return 0;
}
/**********************************************************
* The above program demonstrates how arrays of objects c- *
* an be made for a class.                                 *
**********************************************************/