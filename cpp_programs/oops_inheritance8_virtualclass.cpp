#include<iostream>
using namespace std;
/***************************************************************
* When we have an inheritance where, Base class derives two    *
* classes, and these two classes combinely derive one class.   *
* So, heirarchical and multiple inheritance.                   *
*                                                              *
* In the following code:                                       *
*   student --> (test, sports) {Heirarchical Inheritance}      *
*   (test, sports) --> result {Multiple Inheritance}           *
* roll_number is inherited protected to Test and Sports.       *
* To prevent roll_number to be inherited twice, we use virtual *
* base class.                                                  *
* Setting Student as virtual base class prevents from roll no  *
* to go twice to result objects.  This is the function of vi-  *
* rtual base function.                                         *
***************************************************************/
class Student{
	protected:
		int roll_number;
	public:
		void set_roll_number(int r){
			roll_number = r;
		}
		void print_roll_number(){
			cout << "Roll number is " << roll_number << endl;
		}
};
class Test : virtual public Student{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float m1, float m2){
			maths = m1;
			physics = m2;
		}
		void show_marks(){
			cout << "Marks in Maths: " << maths
				 << " and Physics: " << physics << endl;
		}
};
class Sports : virtual public Student{
	protected:
		float score;
	public:
		void set_score(float s){
			score = s;
		}
		void show_score(){
			cout << "Your score in sports: " << score << endl;
		}
};
class Result : public Test, public Sports{
	protected:
		float total;
	public:
		void show_total(){
			total = maths + physics + score;
			print_roll_number();
			show_marks();
			show_score();
			cout << "Your total is " << total << endl;
		}
};
int main(){
	Result dhruv;
	dhruv.set_roll_number(160240);
	dhruv.set_marks(98.9, 99.9);
	dhruv.set_score(70);
	dhruv.show_total();
	return 0;
}