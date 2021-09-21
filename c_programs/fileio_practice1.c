#include<stdio.h>

int main() {
  
  FILE* ptr;
  float num1, num2, num3;
  ptr = fopen("data.txt","r");
  fscanf(ptr, "%f %f %f", &num1, &num2, &num3);
  fclose(ptr);
  printf("The constants are: %.3f, %.3f, %.3f\n",num1, num2, num3);
  return 0;

}