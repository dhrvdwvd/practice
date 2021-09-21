#include<stdio.h>

/************************************************
*  This program demonstrates how to write to a  *
*  file using fprintf().                        *
************************************************/

int main(){
  FILE *fptr;
  fptr = fopen("newfile.txt","w");
  fprintf(fptr,"A new line in a new file.");
  fclose(fptr);
  return 0;
}