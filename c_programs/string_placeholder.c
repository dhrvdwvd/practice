#include<stdio.h>

/************************************************
*    scanf treats spaces as null characters,    *
*    gets() lets multi word strings to be i-    *
*    putted.  puts() prints strings, without    *
*    any drama of placeholders.                 *
************************************************/

int main() {
  
  char name[50];
  printf("Enter your name: ");
  scanf("%s",name);
  
  printf("You entered: %s", name);
  return 0;

}