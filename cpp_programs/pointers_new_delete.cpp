#include<iostream>
using namespace std;

int main(){
	// Classic way:
	int a = 4;
	int *ptr = &a;
	cout << "a = *(ptr) = " << *(ptr) << endl;
	
	// Using new operator: (dynamically allocated)
	int *p = new int(44);
	int *p1 = new int[4];
	p1[0] = 100;
	p1[1] = 1340;
	p1[2] = 300;
	delete[] p1;
	cout << "*(p) = " << *(p) << endl;
	cout << "p[0] = " << p1[0] << endl;
	cout << "p[1] = " << p1[1] << endl;
	cout << "p[2] = " << p1[2] << endl;
	return 0;
}