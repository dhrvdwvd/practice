#include<stdio.h>

int main() {
  
  int weight[7];
  int* ptr=&weight[0];  // or ptr = weight;
  for(int i=0;i<7;i++){
	  printf("Enter weight of person %d:\n",i+1);
	  scanf("%d",ptr);
	  ptr++;
  }
  
  for(int i=0;i<7;i++){
	  printf("weight of person %d: %d\n",i+1,weight[i]);
  }
  return 0;

}