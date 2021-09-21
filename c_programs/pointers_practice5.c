#include<stdio.h>

/*********************************************
*    This program demonstrates how a poi-    *
*    nter to a pointer is used.              *
*********************************************/

int main() {
  
  int i=1;
  int* ptr;
  int** ptrptr;
  ptr = &i;
  ptrptr = &ptr;
  printf("The value of i is %d\n",i);
  printf("The value of i is %d\n",*ptr);
  printf("The value of i is %d\n", **ptrptr);
  return 0;

}