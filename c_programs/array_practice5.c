#include<stdio.h>
void swap(int* a, int* b);

int main() {
  
  int arr[]={1,2,3,4,5,6,7,8,9,0};
  printf("Array:");
  for (int i=0;i<10;i++){
	  printf("%3d",arr[i]);
  }
  printf("\n");
  for (int i=0;i<5;i++){
	  swap(arr+i, arr+9-i);
  }
  printf("Swap function has done its work.  Now,\nArray:");
  for (int i=0;i<10;i++){
	  printf("%3d",arr[i]);
  }
  printf("\n");
  return 0;

}

void swap(int*a, int* b){
	int temp=*a;
	*a = *b;
	*b = temp;
}