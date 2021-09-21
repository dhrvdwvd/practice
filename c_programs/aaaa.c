#include<stdio.h>

void encrypt(char* c){
	
	while(*c != '\0'){
		*c = *c + 1;
		c++;
	}
}
int main() {
  
  char c[] ="abcd";
  encrypt(&c[0]);
  printf("%s",c);
  return 0;

}