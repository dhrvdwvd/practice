#include<stdio.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

int main() {
  
  struct employee e1 = {100,54.5,"Dhruv"};
  struct employee *ptr;
  ptr = &e1;
  printf("Salary of employee code: %d is %f\n",(*ptr).code, (*ptr).salary); // or replace * and . with: 
  printf("Salary of employee code: %d is %f\n",ptr->code, ptr->salary);
  return 0;

}