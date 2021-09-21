#include<stdio.h>

int main() {
  
  int subject1, subject2, subject3, total;
  printf("Enter marks obtained in subject 1\n");
  scanf("%d", &subject1);
  printf("Enter marks obtained in subject 2\n");
  scanf("%d", &subject2);
  printf("Enter marks obtained in subject 3\n");
  scanf("%d", &subject3);
  
  total = (subject1 + subject2 + subject3)/3;
  
  if ((total >= 40) && (subject1>=33) && (subject2 >= 33) && (subject3 >= 33)) {
	  printf("Student passed!\n");
  }
  else {
	  printf("Student failed!\n");
  }
  return 0;

}