#include<stdio.h>

void printPattern(int n);

int main() {
  int n=5;
  //printf("How many lines of pattern?\n");
  //scanf("%d",&n);
  printPattern(n);
  
  return 0;

}

void printPattern(int n){
	printf("Print pattern is runnning with argument = %d.\n",n);
	
	if (n == 1){
		printf("*\n");
		return;
	}
	printPattern(n-1);
	for (int i=0;i<(2*n-1);i++){
		printf("*");
	}
	printf("\n");
}
/* void printPattern(int n){
	printPattern(n-1);
	if (n == 1){
		printf("*\n");
		return;
	}
	for (int i=0; i<=2; i++){
		printf("*");
	}
    printf("\n");
	return;
} */