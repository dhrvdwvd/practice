#include<stdio.h>

int strlen1(char* str){
	char* ptr=str;
	int len=0;
	while(*ptr !='\0'){
		len++;
		ptr++;
	}
	return len;
}
int main() {
  
  char st[]="dhrvdwvd";
  int l = strlen1(st);
  printf("%s has %d characters.\n",st,l);
  return 0;

}