#include<stdio.h>
#include<stdlib.h>

/************************************************
*  DMA stands for dynamic memory allocation.    *
*  It borrows memory from heap region of RAM    *
*  malloc stands for memory allocation.  Array  *
*  size cannot be changed during runtime.       *
*  malloc, calloc, realloc, are some functions  *
*  that can help do this.                       *
************************************************/

int main() {
  
  float* ptr;
  ptr = (float*)malloc(10*sizeof(float));
  for(int i=0; i<10; i++){
	  printf("Element %d: ",i+1);
	  scanf("%f",&ptr[i]);
  }
  for(int i=0; i<10; i++){
	  printf("Element %d: %.2f\n",i+1,ptr[i]);
	  
  }
  return 0;

}