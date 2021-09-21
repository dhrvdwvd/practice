#include<iostream>
using namespace std;
class BankDeposit
{
	int principal;
	int years;
	float rate;
	int returnValue;
	public:
		BankDeposit(){};
		BankDeposit(int p, int y, float r){
			principal = p;
			years = y;
			rate = r;
			returnValue = principal;
			for(int i=0; i<years; i++){
				returnValue = returnValue*(1+rate);
			}
		}
		BankDeposit(int p, int y, int R){
			principal = p;
			years = y;
			rate = float(R)/100.0;
			returnValue = principal;
			for(int i=0; i<years; i++){
				returnValue = returnValue*(1+rate);
			}
		}
		void showInvest(void){
			cout<< "Principal is "<<principal<<endl;
			cout<< "Rate is "<<rate<<endl;
			cout<< "Return value is "<<returnValue<<endl;
		}
};
int main(){
	int p, R, y;
	float r;
	BankDeposit bd1, bd2, bd3;
	cout<< "Enter principal amount: ";
	cin>>p;
	cout<< "Enter number of years: ";
	cin>>y;
	cout<< "Enter rate in decimal: ";
	cin>>r;
	bd1 = BankDeposit(p,y,r);
	bd1.showInvest();
	cout<< "\nEnter principal amount: ";
	cin>>p;
	cout<< "Enter number of years: ";
	cin>>y;
	cout<< "Enter rate in percent: ";
	cin>>R;
	bd2 = BankDeposit(p,y,R);
	bd2.showInvest();
	bd3.showInvest();
	
	return 0;
}