#include<stdio.h>
int fibonacci(int n);

int main() {
  
  int x;
  printf("This program displays the n-th term in a Fibonacci series.\n");
  printf("Which term do you wanna see?\n");
  scanf("%d",&x);
  
  printf("The %d-th term in Fibonacci series is %d\n", x, fibonacci(x));
  return 0;
}

int fibonacci(int n){
  if (n == 1){
	  return 0;
  }
  else if (n == 2){
	  return 1;
  }
  else{
	  return fibonacci(n-1) + fibonacci(n-2);
  }
}