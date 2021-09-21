#include<stdio.h>
#include<stdlib.h> //includes rand(), srand()
#include<time.h>  //includes time()

int main() {
  
  int number;
  srand(time(0));   //to initialise the random number funciton
  number = rand()%100 + 1;  // a random number between 1 and 100
  printf("%d\n", number);
  return 0;

}