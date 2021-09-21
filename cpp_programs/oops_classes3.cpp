#include<iostream>
using namespace std;
class Shop{
	int itemId[100];
	int itemPrice[100];
	int counter;
	public:
	  void initcounter(){ counter=0; }
	  void setPrice();
	  void displayPrice();
};
void Shop :: setPrice(void){
	cout<< "Enter ID of the item "<<counter+1<< ": ";
	cin>>itemId[counter];
	cout<< "Enter the price for the item "<<itemId[counter]<< ": ";
	cin>>itemPrice[counter];
	counter++;
}
void Shop :: displayPrice(void){
	for(int i=0; i<counter; i++){
		cout<< "Price of item id: "<<itemId[i]<< " is "<<itemPrice[i]<<endl;
	}
}
int main(){
	Shop dukaan;
	dukaan.initcounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	cout<< "\n\n";
	dukaan.displayPrice();
	return 0;
}