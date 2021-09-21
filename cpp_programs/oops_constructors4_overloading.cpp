#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	friend void distancebwPts(Point p1, Point p2);
	int x,y;
public:
	Point(int a, int b){
		x = a;
		y = b;
	}
	Point(int a){
		x = a;
		y = 0;
	}
	Point(void){
		x = 0;
		y = 0;
	}
	void displayPoint(void){
		cout<< "("<<x<< ", "<<y<< ")"<<endl;
	}
};
void distancebwPts(Point p1, Point p2){
	cout<< "Distance between the points: "<<pow(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2),0.5)<<endl;
}
int main(){
  Point A(1,3), B(3,5), C(3), D;
  A.displayPoint();
  C.displayPoint();
  D.displayPoint();
  return 0;
}