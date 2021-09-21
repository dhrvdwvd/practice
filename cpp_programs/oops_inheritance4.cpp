#include<iostream>
using namespace std;
class student{
	protected:
		int roll_number;
	public:
		void set_roll_number(int r){
			roll_number = r;
		}
		void get_roll_number(void){
			cout << "Roll number for this student: "<<roll_number<<endl;
		}
};
class Exam : public student{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float m1, float m2){
			maths = m1;
			physics = m2;
		}
		void get_marks(void){
			cout << "Marks for maths are: "<<maths<< " and physics are "<<physics<<endl;
		}
};
class Results : public Exam{
	float percentage;
	public:
		void display(void){
			get_roll_number();
			get_marks();
			cout << "Percentage for this student are: " << (maths + physics)/2.0 
			<< endl;
		}
};
int main(){
/********************************************************************
* If B inherits from A and C inherits from A, i.e., A-->B-->C, then *
*   1. A is the base class for B and B is the base class for C.     *
*   2. ABC is called inheritance path.                              *
********************************************************************/
	Results harry;
	harry.set_roll_number(100);
	harry.set_marks(90.0, 98.0);
	harry.display();
	return 0;
}