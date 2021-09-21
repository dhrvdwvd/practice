#include<stdio.h>
void printTable(int* mulTable, int num, int n);
int main() {
  
  int mulTable[3][10];
  printTable(mulTable[0],2,10);
  printTable(mulTable[1],6,10);
  printTable(mulTable[2],7,10);
  return 0;

}

void printTable(int* mulTable, int num, int n){
	printf("Multiplication table of %d: \n",num);
	for(int i=0;i<n;i++){
		mulTable[i]=num*(i+1);
		printf("%3d X %3d = %3d\n",num,(i+1),mulTable[i]);
	}
	printf("\n******************************************\n");
}