#include<stdio.h>

int main() {
  
  // 97-122 lowercase a-z
  char ch;
  
  printf("Enter a character\n");
  scanf("%c", &ch);
  
  if (ch>=97 && ch<=122) {
	  printf("Lowercase!");
  }
  else {
	  printf("Not lowercase.");
  }
  return 0;

}