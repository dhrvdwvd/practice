#include<stdio.h>
void printArray(int* arr, int size);

/************************************************
*    This program demonstrates how arrays       *
*    are used when they are passed to funct-    *
*    ions and their similarites with pointe-    *
*    rs.                                        *
************************************************/

int main() {
  
  int t[]={10, 33, 78, 234, 2342, 45435};
  int s=6;
  printArray(t, s);
  return 0;

}

void printArray(int* arr, int size){
	for(int i=0;i<size;i++){
		printf("Element %d in the array: %d\n",i+1,*(arr+i));
	}
}