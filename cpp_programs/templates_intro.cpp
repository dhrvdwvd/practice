#include<iostream>
using namespace std;
template <class T>
class Vector{
	T * arr;
	int size;
	public:
		Vector(int m){
			size = m;
			arr = new T [size];
		}
		void setVector(){
			for(int i=0; i<size; i++){
				cout << (i+1) << "th component: ";
				cin >> this->arr[i];
			}
		}
		void showVector(){
			cout << "You entered: ";
			for(int i=0; i<size; i++){
				cout << this->arr[i] << "\t";
			}
			cout << "\n";
		}
		T DotProduct(Vector &v){
			T sum = 0;
			for(int i=0; i<size; i++){
				sum += this->arr[i] * v.arr[i];
			}
			return sum;
		}
};
int main(){
	Vector <float>v1(2);
	Vector <float>v2(2);
	v1.setVector();
	v1.showVector();
	v2.setVector();
	v2.showVector();
	
	cout << "v1 .* v2 = " << v1.DotProduct(v2) << "\n";
	return 0;
}