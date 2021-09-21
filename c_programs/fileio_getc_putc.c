#include<stdio.h>

/************************************************
*  fgetc() reads one character at a time.       *
*  fputc() writes one character at a tiem.      *
************************************************/

int main(){
  FILE *ptr1, *ptr2;
  int i=1;
  char a;
  char b='a';
  ptr1 = fopen("sample.txt","r");
  a = fgetc(ptr1);
  while(a != EOF){  //  EOF is end of file
	  printf("Character %d: %c\n",i,a);
	  a = fgetc(ptr1);
	  i++;
  }
  fclose(ptr1);
  
  ptr2 = fopen("newnew.txt","w");
  fputc(b, ptr2);
  fclose(ptr2);
  return 0;
}