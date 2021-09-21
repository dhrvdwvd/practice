#include<iostream>
using namespace std;
class complexNo
{
	int a;  // Real part
	int b;  // Complex part
	public:
		void setNo(int v1, int v2){
			a = v1;
			b = v2;
		}
		friend complexNo sumcomplexNos(complexNo a1, complexNo a2);
		void showNo(void){
			cout<<a<< " + "<<b<< "i"<<endl;
		}
};
complexNo sumcomplexNos(complexNo a1, complexNo a2){
	complexNo a3;
	a3.setNo((a1.a+a2.a),(a1.b+a2.b));
	return a3;
}
int main(){
  complexNo A1, A2, A3;
  int x, y;
  cout<< "Real part: ";
  cin>>x;
  cout<< "Imaginary part: ";
  cin>>y;
  cout<< "You entered: "<<x<< " and "<<y<<endl;
  A1.setNo(x,y);
  A1.showNo();
  cout<< "Real part: ";
  cin>>x;
  cout<< "Imaginary part: ";
  cin>>y;
  cout<< "You entered: "<<x<< " and "<<y<<endl;
  A2.setNo(x,y);
  A2.showNo();
  cout<< "Summing the above complex numbers."<<endl;
  A3 = sumcomplexNos(A1, A2);
  A3.showNo();
  return 0;
}
/**********************************************************
* To permit usage of private members of a class, we need  *
* to mention the friend functions in the definition of a  *
* class, only friend functions can access the private me- *
* mbers of a class.  sumcomplexNos cannot access a and b  *
* by default, however, making it a friend allows this.    *
* Declarations of friend funcitons can be done in the pr- *
* ivate or public sections of the class.                  *
**********************************************************/