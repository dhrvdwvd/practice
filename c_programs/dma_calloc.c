#include<stdio.h>
#include<stdlib.h>
/************************************************
*  calloc takes two arguments: no. of elements  *
*  and size of individual element as the foll-  *
*  owing program demonstrates.  Default value   *
*  is zero for all the elements.  free() is     *
*  used to free the dynamically allocated mem-  *
*  for efficient usage of resources.            *
************************************************/
int main() {
  float* ptr;
  ptr = calloc(4, sizeof(int));
  printf("All the elements of the allocated memory are:\n");
  for(int i=0;i<4;i++){
	  printf("%d\n",ptr[i]);
  }
  free(ptr);
  return 0;
}