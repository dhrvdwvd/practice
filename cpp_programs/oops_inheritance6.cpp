#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalc{
	public:
		float add(float a, float b){
			cout << a << " + " << b << " = " << a+b << endl;
			return a+b;
		}
		float subtract(float a, float b){
			cout << a << " - " << b << " = " << a-b << endl;
			return a-b;
		}
		float multiply(float a, float b){
			cout << a << " * " << b << " = " << a*b << endl;
			return a*b;
		}
		float divide(float a, float b){
			cout << a << " / " << b << " = " << a/b << endl;
			return a/b;
		}
};
class SciCalc{
	public:
		float Log(float a){
			cout << "Natural logarithm of " << a << " is " 
			<< log(a) << endl;
			return log(a);
		}
		float Log10(float a){
			cout << "Logarithm to base 10 of " << a << " is " 
			<< log10(a) << endl;
			return log10(a);
		}
		float Sine(float a){
			cout << "Sine of " << a << " is " << sin(a) << endl;
			return sin(a);
		}
		float Cosine(float a){
			cout << "Cosine of " << a << " is " << cos(a) << endl;
			return cos(a);
		}
};
class HybridCalc : public SimpleCalc, public SciCalc{
};
int main(){
	float a1, a2;
	char choice;
	HybridCalc c1;
	cout << "1: Natural Log\n2: Log10\n3: Sine\n4: Cosine\nChoose from +, -,*, /, 1, 2, 3, 4: ";
	cin >> choice;
	cout << "Now enter two numbers to perform the above on: ";
	cin >> a1 >> a2;
	if(choice == '+'){
		c1.add(a1, a2);
	}
	else if(choice == '-'){
		c1.subtract(a1,a2);
	}
	else if(choice == '*'){
		c1.multiply(a1, a2);
	}
	else if(choice == '/'){
		c1.divide(a1, a2);
	}
	else if(choice == '1'){
		c1.Log(a1);
		c1.Log(a2);
	}
	else if(choice == '2'){
		c1.Log10(a1);
		c1.Log10(a2);
	}
	else if(choice == '3'){
		c1.Sine(a1);
		c1.Sine(a2);
	}
	else if(choice == '4'){
		c1.Cosine(a1);
		c1.Cosine(a2);
	}
	else{
		cout << "Invalid choice.";
	}
	return 0;
}