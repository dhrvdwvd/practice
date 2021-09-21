#include<stdio.h>

int main() {
  
  FILE* ptr;
  int i=0;
  ptr = fopen("multtable.txt","w");
  while(i<10){
	  fprintf(ptr, "\t7\tX\t%2d\t=\t%d\n",i+1,7*(i+1));
	  i++;
  }
  fclose(ptr);
  return 0;

}