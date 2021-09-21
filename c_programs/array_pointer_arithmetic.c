#include<stdio.h>

/*************************************
*    This program demonstrates how   *
*    pointer values, which are ac-   *
*    tually addresses of a data t-   *
*    ype, increment depeding on t-   *
*    he size of the data type.  I-   *
*    n this example, integer is of   *
*    size 4 bytes while char is of   *
*    size 1 byte.                    *
*************************************/

int main() {
  
  int i=33;
  char c='a';
  float f=4.56;
  int* ptr_i=&i;
  char* ptr_c=&c;
  float* ptr_f=&f;
  printf("ptr_i is a pointer that points to an integer.\n");
  printf("ptr_i is %u\n",ptr_i);
  ptr_i++;
  printf("ptr_i + 1 is %u\n",ptr_i);
  ptr_i= ptr_i - 2;
  printf("ptr_i - 2 is %u\n",ptr_i);
  printf("\nptr_c is a pointer that points to a character.\n");
  printf("ptr_c is %u\n",ptr_c);
  ptr_c++;
  ptr_c++;
  printf("ptr_c + 2 is %u\n",ptr_c);
  ptr_c= ptr_c - 3;
  printf("ptr_c - 3 is %u\n",ptr_c);
  printf("\nptr_f is a pointer that points to a float.\n");
  printf("ptr_f is %u\n",ptr_f);
  ptr_f++;
  ptr_f++;
  ptr_f++;
  printf("ptr_f + 3 is %u\n",ptr_f);
  ptr_f= ptr_f - 1;
  printf("ptr_f - 1 is %u\n",ptr_f);
  return 0;

}