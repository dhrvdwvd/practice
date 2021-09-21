#include<iostream>
using namespace std;
class Shop{
	int ids[5];
	float prices[5];
	public:
		void setData(){
			int id;
			float price;
			for(int i=0; i<5; i++){
				cout << "\nEnter ID: ";
				cin >> id;
				ids[i] = id;
				cout << "Enter corresponding price: ";
				cin >> price;
				prices[i] = price;
				fflush(stdin);
			}
		}
		void showData(){
			for(int i=0; i<5; i++){
				cout << "ID: " << ids[i] << " | Price: " << prices[i] << endl;
			}
		}
};
int main(){
	int size = 3;
	Shop * ptr = new Shop [size];
	for(int i=0; i<size; i++){
		cout << "For shop " << (i+1) << ": " << endl;
		(ptr+i)->setData();
		cout << "\n";
		(ptr+i)->showData();
		cout << "\n\n\n";
	}
	return 0;
}