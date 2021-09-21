#include<stdio.h>

int main() {
  
  int mul[10];
  int k;
  printf("Enter the number for which to display a multiplication table.\n");
  scanf("%d",&k);
  
  for(int i=0;i<10;i++){
    mul[i]=k*(i+1);
    printf("%3d X%3d =%3d\n",k,i+1,mul[i]);
	}
  return 0;

}