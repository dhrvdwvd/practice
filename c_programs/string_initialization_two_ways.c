#include<stdio.h>

/************************************************
*    When string is initialized as str[], th-   *
*    en it cannot be re-initialized.  HOwever,  *
*    when re-initialized as str (a pointer),    *
*    then it can be re-initialized as explai-   *
*    in this program.                           *
************************************************/

int main() {
  
  char* ptr1 = "ABCD";
  char ptr2[] = "EFGH";
  ptr1 = "abcd";
  //ptr2 = "efgh"; This will return an error.
  puts(ptr1);
  puts(ptr2);
  return 0;

}