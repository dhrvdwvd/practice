#include<stdio.h>

int main() {
  
  int marks[5];  //allocate space for 5 integers.
  printf("Marks for student 1: ");
  scanf("%d", &marks[0]);
  printf("Marks for student 2: ");
  scanf("%d", &marks[1]);
  printf("Marks for student 3: ");
  scanf("%d", &marks[2]);
  printf("Marks for student 4: ");
  scanf("%d", &marks[3]);
  printf("Marks for student 5: ");
  scanf("%d", &marks[4]);
  
  printf("The marks entrered are: %d, %d, %d, %d, and %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
  
  return 0;

}