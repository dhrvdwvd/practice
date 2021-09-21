#include<stdio.h>

void str_cpy(char* st1, char* st2){
  int i=0;
  while(st1[i] != '\0'){
	  st2[i]=st1[i];
	  i++;
  }
  st2[i]='\0';
 }
 
int main() {
  
  char st1[] = "abcdefghijklmnop";
  char st2[20];
  str_cpy(st1, st2);
  printf("st1 is %s\nst2 is %s\n",st1,st2);
  return 0;

}