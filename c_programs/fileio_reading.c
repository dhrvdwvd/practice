#include<stdio.h>

/************************************************
*  fscanf and fprintf are file counterparts of  *
*  of scanf and printf and the following prog-  *
*  ram demonstrates its use.                    *
************************************************/

int main() {
  float num;
  FILE* ptr;
  ptr = fopen("num.txt","r");
  fscanf(ptr, "%f", &num);
  fclose(ptr);
  printf("num = %f", num);
  return 0;

}