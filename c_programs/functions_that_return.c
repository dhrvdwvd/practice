#include<stdio.h>

int sum(int a, int b);

int main() {
  int x = 2, y = 55;
  printf("Sum of x = %d and y = %d is %d\n",x,y,sum(x,y));
  return 0;
}

int sum(int a, int b){
	return a + b;
}