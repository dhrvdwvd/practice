#include<stdio.h>

int main() {
  FILE* ptr1;
  FILE* ptr2;
  FILE* ptr3;
  char c;
  ptr1 = fopen("a.txt","r");
  ptr2 = fopen("b.txt","w");
  ptr3 = fopen("c.txt","w");
  c = fgetc(ptr1);
  while(c != EOF){
	  fputc(c,ptr2);
	  fputc(c,ptr2);
	  fputc(c,ptr3);
	  c = fgetc(ptr1);
  }
  fclose(ptr1);
  fclose(ptr2);
  ptr1 = fopen("a.txt","r");
  c = fgetc(ptr1);
  while(c != EOF){
	  fputc(c,ptr3);
	  c = fgetc(ptr1);
  }
  fclose(ptr1);
  fclose(ptr3);
  return 0;

}