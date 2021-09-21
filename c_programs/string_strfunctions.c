#include<stdio.h>
#include<string.h>

/************************************************
*   This program demonstrates the various fu-   *
*   nctions: strlen(), strcpy(), strcat(),      *
*   strcmp() present in the string.h header     *
*   file.                                       *
************************************************/

int main() {
  
  char* str1 = "Hello";
  char* str2 = "Helps";
  char str3[45];
  char str4[45];
  printf("str1 is %s and length of this string (excluding null character) is %d\n",str1,strlen(str1));
  strcpy(str3,str1);
  printf("str1: %s is copied to str3: %s\n", str1, str3);
  strcat(str3,str2);
  printf("str3 and str2 concatenated: %s\n",str3);
  printf("strcmp for str1 and str2 returns: %d\n",strcmp(str1,str2));
  return 0;

}