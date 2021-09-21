#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	friend void distancebwPts(Point p1, Point p2);
	int x,y;
public:
	Point(int a=0, int b=0){
		x = a;
		y = b;
	}
	void displayPoint(void){
		cout<< "("<<x<< ", "<<y<< ")"<<endl;
	}
};
int main(){
  Point A(1,3), B(3,5), C(3), D;
  A.displayPoint();
  C.displayPoint();
  D.displayPoint();
  return 0;
}