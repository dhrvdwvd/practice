#include<stdio.h>

int main() {
  
  int skip = 5;
  int i = 0;
  
  while(i<8) {
	  if(i!=skip) {
		  i++;
		  continue;
	  }
	  printf("i = %d\n",i);
	  i++;
  }
  
  printf("At the end of the loop, i = %d\n",i);
  
  return 0;
}