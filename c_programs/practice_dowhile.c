#include<stdio.h>

int main() {
  
  int i=0, n;
  printf("Enter input:\n");
  scanf("%d", &n);
  
  do {
    printf("%d\n", i+1);
	i++;
  }while(i<n);
  
  return 0;

}