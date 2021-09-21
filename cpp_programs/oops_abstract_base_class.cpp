#include<iostream>
using namespace std;
class dhruv1{
	protected:
		string d11;
		float d12;
	public:
		dhruv1(string s, float f){
			d11 = s;
			d12 = f;
		}
		virtual void display()=0;
};
class dhruv2 : public dhruv1{
	protected:
		int d21;
	public:
		dhruv2(string s, float f, int i): dhruv1(s, f){
			d21 = i;
		}
		void display(){
			cout << "d11: " << d11 << ", d12: " << d12 << ", and d21: " 
			<< d21 << endl;
		}
};
class dhruv3 : public dhruv1{
	protected:
		float d31;
	public:
		dhruv3(string s, float f, float f1): dhruv1(s,f){
			d31 = f1;
		}
		void display(){
			cout << "d11: " << d11 << ", d12: " << d12 << ", and d31: " 
			<< d31 << endl;
		}
};
int main(){
	dhruv1 * D;
	dhruv3 DD("dhrvdwvd", 9.81, 1.225);
	D = &DD;
	D->display();
	return 0;
}
/***************************************************************
* In the above program, dhruv1 class was made so that it can   *
* be inherited by other classes (dhruv2, dhruv3). This type of *
* class is known as abstract base class.  In this class, virt- *
* ual was added so as to stop that function from running.      *
* In the dhruv1 class, we can use a do-nothing function to ma- *
* ke the display function a pure virtual function. dhruv1 is   *
* now a **abstract base class**.  This type of class is only   *
* used for other classes to inherit, and hence no objects are  *
* made using this class, hence, abstract.  This is a design c- *
* oncept and is often used in real world programming.          *
***************************************************************/