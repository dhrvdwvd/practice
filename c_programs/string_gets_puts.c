#include<stdio.h>

/************************************************
*    Demonstrates how gets() and puts() is      *
*    used to input and print strings.           *
*    puts() puts a \n character at the end      *
*    of the string.                             *
************************************************/
    
int main() {
  
  char str[50];
  printf("Enter your full name: ");
  gets(str);
  printf("Your name: ");
  puts(str);
  return 0;

}