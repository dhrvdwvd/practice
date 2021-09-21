#include<stdio.h>
#include<stdlib.h>
/************************************************
*  realloc is used to reallocate more or less   *
*  space to already allocated space as this p-  *
*  rogram demonstrates.                         *
************************************************/
int main(){
  int* ptr;
  ptr = calloc(5,sizeof(int));
  printf("Enter 5 numbers: \n");
  for(int i=0;i<5;i++){
	  scanf("%d",&ptr[i]);
  }
  printf("\nElements entered are: \n");
  for(int i=0;i<5;i++){
	  printf("%d\n",ptr[i]);
  }
  printf("Now reallocating 5 element array to 10 element array.\n");
  ptr = realloc(ptr, 10*sizeof(int));
  printf("Enter 10 numbers: \n");
  for(int i=0;i<10;i++){
	  scanf("%d",&ptr[i]);
  }
  printf("\nElements entered are: \n");
  for(int i=0;i<10;i++){
	  printf("%d\n",ptr[i]);
  }
  free(ptr);
  return 0;
}