#include<iostream>
#include<vector>
using namespace std;
// Use cplusplus.com as a reference.
void display(vector<int> &v){
	cout << "Display called.\n";
	for(int i=0; i<v.size(); i++){
		cout << "Element " << (i+1) << ": " << v[i] << "\n";
	}
}
int main(){
	int element, size, pos;
	vector<int> vec1; // Zero length vector
	vector<char> vec2(4); // 4 element char vector
	vector<char> vec3(vec2); // 4 element char vector
	vector<int> vec4(6,4); // 6 element vector of 4s
	//cout << "Enter the size of the vector: ";
	//cin >> size;
	// for(int i=0; i<size; i++){
		// cout << "Enter an element: ";
		// cin >> element;
		// vec1.push_back(element);
	// }
	//vec1.pop_back();
	display(vec1);
	// vector<int> :: iterator iter = vec1.begin(); //1st Elmnt
	// cout << "A new element, what element and where?";
	// cin >> element >> pos;
	// iter points to index 0, now add pos to specify a 
	// definite index.
	// 5 copies of elements are added at pos.
	// vec1.insert(iter+pos, 5, element);
	display(vec4);
	return 0;
}