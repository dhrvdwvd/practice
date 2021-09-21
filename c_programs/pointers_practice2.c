#include<stdio.h>
void address_var(int x);

/******************************************
*    This program compares the addressses *
*  	of a variable in the main's stack an  *
*	d another function's stack.           *
*******************************************/

int main() {
  
  int k;
  int* j;
  j = &k;
  printf("The address of k in the main stack is %u\n",j);
  address_var(k);
  return 0;

}

void address_var(int x){
  printf("The address of k in the function's stack is %u\n",&x);
}