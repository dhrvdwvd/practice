#include<iostream>
using namespace std;
// Demonstrates how member functions are declared outside
// the class definition.
template <class T>
class dhruv{
	public:
		T data;
		dhruv(T t){
			data = t;
		}
		void display();
};
template <class T>
void dhruv<T> :: display(){
	cout << data << "\n";
}
template <class T>
void func(T a){
	cout << "I am templatised func()" << a << "\n";
}
void func(int a){
	cout << "I am first func()" << a << "\n";
}

int main(){
	float t = 3.45;
	dhruv <float> dd(t);
	dd.display();
	func(3); // Here the function with exact match has higher
	return 0; // priority.
}