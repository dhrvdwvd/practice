#include<stdio.h>

int main() {
  
  int n, prime=1;
  printf("Enter n\n");
  scanf("%d", &n);
  
  for (int i=2; i<n; i++) {
	  if (n%i == 0) {
		  prime=0;
		  break;
	  }
  }
  
  if (prime == 0) {
	  printf("Not a prime number.\n");
  }
  else {
	  printf("Prime number.\n");
  }
  return 0;

}