#include<stdio.h>

int main() {
  
  char str[]="Dhruv";
  char* ptr = str;
  int i=0;
  
  while(*ptr != '\0'){
    printf("%c", *(ptr));
	i++;
	ptr++;
  }
  return 0;

}