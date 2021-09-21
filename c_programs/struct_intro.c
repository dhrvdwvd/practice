#include<stdio.h>
#include<string.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

int main() {
  
  int num1;
  float num2;
  char str[10];
  printf("This program will require inputs of code, salary, and name for an employee.\n");
  struct employee e1;
  struct employee e2;
  struct employee e3;
  printf("For employee 1,\ncode: ");
  scanf("%d",&e1.code);
  printf("salary: ");
  scanf("%f",&e1.salary);
  printf("name: ");
  scanf("%s",str);
  strcpy(e1.name,str);  //-> Here e1.name = str won't work, because str[10] is readable.
  printf("For employee 2,\ncode: ");
  scanf("%d",&e2.code);
  printf("salary: ");
  scanf("%f",&e2.salary);
  printf("name: ");
  scanf("%s",str);
  strcpy(e2.name,str);
  printf("For employee 3,\ncode: ");
  scanf("%d",&e3.code);
  printf("salary: ");
  scanf("%f",&e3.salary);
  printf("name: ");
  scanf("%s",str);
  strcpy(e3.name,str);
  return 0;

}