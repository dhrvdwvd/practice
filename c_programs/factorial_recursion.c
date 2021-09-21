#include<stdio.h>
int factorial(int x);

int main() {
  int x;
  printf("Calculate factorial of\n");
  scanf("%d",&x);
  printf("Factorial of %d is %d\n",x,factorial(x));
  return 0;

}

int factorial(int x){
  if(x == 1 || x == 0){
	  return 1;
  }
  else{
	  return x*factorial(x-1);
  }
}