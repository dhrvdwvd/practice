#include<stdio.h>

int main() {
  
  int ar[5];
  int* ptr=ar;  // or ptr = &ar[0];
  printf("ptr is a pointer that points to the first element of array ar[5].\n");
  printf("Verifying whether ptr + 2 points to the *third* element of array ar[5].\n");
  ptr = ptr + 2;
  if(ptr == &ar[2]){
	  printf("ptr + 2 points to the third element of array ar.\n");
  }
  else{
	  printf("ptr + 2 does not point to the third element of array.\n");
  }
  return 0;

}