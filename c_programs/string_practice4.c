#include<stdio.h>

void slice(char* str, int m, int n){
	int i=0;
	while(i<n-m+1){
		str[i]=str[i+m];
		i++;
	}
	str[i]='\0';
}

int main() {
  
  char str[] = "abcdefghijk";
  slice(str, 2, 7);
  printf("string becomes: %s\n",str);
  return 0;

}