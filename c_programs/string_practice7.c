#include<stdio.h>

int counter(char* a, char b){
  int i=0, count=0;
  while(*(a+i)!='\0'){
	  if(*(a+i) == b){
		  count++;
		  
	  }
	  i++;
  }
  return count;
}
int main() {
  
  char *a = "TThiss";
  char b = 'h';
  int count;
  count = counter(a,b);
  printf("No. of occurences of %c in %s: %d\n",b, a, count);
  return 0;

}