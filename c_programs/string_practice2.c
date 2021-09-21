#include<stdio.h>
#include<string.h>

int main() {
  
  char str1[27];
  char str2[27];
  char c;
  int i=0;
  printf("Enter a string:\n");
  while(c != '\n'){
	  fflush(stdin);
	  scanf("%c",&c);
	  str1[i]=c;
	  i++;
  }
  str1[i-1]='\0';
  fflush(stdin);
  printf("Now another:\n");
  scanf("%s",str2);
  printf("You entered str1 as: %s\n",str1);
  printf("You entered str2 as: %s\n",str2);
  
  printf("strcmp(str1,str2) returns %d",strcmp(str1,str2));
  return 0;

}