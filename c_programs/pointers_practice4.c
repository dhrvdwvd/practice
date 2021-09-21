#include<stdio.h>
void sum_avg(int* a, int* b, int* sum, float* avg);

/*******************************************
*    This program calculates the sum and   *
*    average of two numbers a and b thr-   *
*    ough a function, and call by refer-   *
*    ence.                                 *
*******************************************/

int main() {
  
  int a=22, b=67, sum;
  float avg;
  sum_avg(&a, &b, &sum, &avg);
  printf("Sum of %d and %d is %d and average is %.2f\n",a, b, sum, avg);
  return 0;

}

void sum_avg(int* a, int* b, int* sum, float* avg){
	*sum = *a + *b;
	*avg = *sum/2.0;
}