#include<iostream>
using namespace std;
typedef struct employee{
	int id;             // Size of struct employee is 9 bytes.
	char name;
	float salary;
}ep;
union money{
	int rice;           // union money can only use one
	char car;           // of rice, car, or dollars at a time.
	float dollars;      // Size of money is 4 bytes.
};
int main(){
  ep john;
  struct employee john2;
  union money m1;
  enum Meal{breakfast, lunch, dinner}; // breakfast lunch dinner = 0 1 2
  Meal ml1=breakfast, ml2=lunch;
  john.id=1;
  john.name='J';
  john.salary=2345.67;
  cout<< "Employee "<<john.id<< " details:"<<endl;
  cout<< "ID = "<<john.id<<endl;
  cout<< "Name = "<<john.name<<endl;
  cout<< "Salary = "<<john.salary<<endl;
  cout<< "Meal 1 - breakfast - "<<ml1<<endl;
  cout<< "Meal 2 -  lunch - "<<ml2<<endl;
  return 0;
}