#include<stdio.h>

int main() {
  
  int k=0;
  int* j;
  j = &k;
  printf("The address of k is stored in j which is %u\n",j);
  printf("The value of k stored at j is %d\n",*j);
  return 0;

}