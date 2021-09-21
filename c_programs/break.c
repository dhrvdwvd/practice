#include<stdio.h>

int main() {
  int i = 0;
  do{
	  printf("i = %d\n", i);
	  if(i == 5) {
		  break;
	  }
	  i++;
  }while(i<10);
  
  printf("At the end of the loop, i = %d\n",i);
  return 0;

}