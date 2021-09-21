#include<stdio.h>

int main() {
  
  int i = 6;
  printf("Initially i = %d\n", i);
  printf("i++ = %d\n", i++);
  printf("i = %d\n", i);
  printf("Resetting value of i to 6.\n");
  i = 6;
  printf("++i = %d\n", ++i);
  printf("i = %d\n", i);
  return 0;

}