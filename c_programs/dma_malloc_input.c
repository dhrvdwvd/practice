#include<stdio.h>
#include<stdlib.h>
int main(){
  int* ptr;
  int n;
  printf("Size of array: ");
  scanf("%d",&n);
  ptr = (int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
	  printf("Enter element %d: ",i+1);
	  scanf("%d",&ptr[i]);
  }
  for(int i=0;i<n;i++){
	  printf("Element %2d: %2d\n",i+1,ptr[i]);
  }
  return 0;
  }