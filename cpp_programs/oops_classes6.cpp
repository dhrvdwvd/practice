#include<iostream>
using namespace std;
class complexNo
{
	int a;
	int b;
public:
	void setData(int v1, int v2){
		a = v1;
		b = v2;
	}
	void setDatabySum(complexNo b1, complexNo b2){
		a = b1.a + b2.a;
		b = b1.b + b2.b;
	}
	void show(void){
		cout<< "Real part: "<<a<< " and imaginary part: "<<b<<endl;
	}
};
int main(){
  complexNo A, B, C;
  int x,y;
  cout<< "Real part: ";
  cin>>x;
  cout<< "Imaginary part: ";
  cin>>y;
  cout<< "You entered: "<<x<< " and "<<y<<endl;
  A.setData(x,y);
  cout<< "Real part: ";
  cin>>x;
  cout<< "Imaginary part: ";
  cin>>y;
  cout<< "You entered: "<<x<< " and "<<y<<endl;
  B.setData(x,y);
  C.setDatabySum(A, B);
  A.show();
  B.show();
  C.show();
  return 0;
}
/**********************************************************
* The above demonstrated that methods in classes can int- *
* eract with classes as well.  Method getDatabySum in ab- *
* ve program interacted with classes complexNo to initia- *
* lize another complex number.                            *
**********************************************************/