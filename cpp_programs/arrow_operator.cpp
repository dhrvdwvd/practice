#include<iostream>
using namespace std;
class ComplexNo{
	int R, I;
	public:
		void printNo(){
			cout << R << " + " << I << "i\n";
		}
		void inputNo(int a, int b){
			R = a;
			I = b;
		}
};
int main(){
	ComplexNo c1;
	ComplexNo *ptr = &c1;
	ComplexNo *ptr1 = new ComplexNo;
	ComplexNo *ptr2 = new ComplexNo;
	ComplexNo *ptr3 = new ComplexNo[3];
	(*ptr).inputNo(1,2);
	(*ptr1).inputNo(2,3);
	ptr2->inputNo(13,23);
	ptr3->inputNo(132,233);
	(*ptr).printNo();
	(*ptr1).printNo();
	ptr2->printNo();
	ptr3->printNo();
	return 0;
}