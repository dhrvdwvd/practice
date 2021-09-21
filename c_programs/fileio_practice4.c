#include<stdio.h>
#include<string.h>

struct employee{
  char name[30];
  float salary;
};

int main(){
  FILE* ptr;
  struct employee e1, e2;
  printf("Input name for first employee: ");
  gets(e1.name);
  printf("Input salary for first employee: ");
  scanf("%f",&e1.salary);
  fflush(stdin);
  printf("Input name for second employee: ");
  gets(e2.name); 
  printf("Input salary for second employee: ");
  scanf("%f",&e2.salary);
  ptr = fopen("employee_info.txt","w");
  fprintf(ptr, "Employee 1\nName: %s\nSalary: %.2f\n",e1.name,e1.salary);
  fprintf(ptr, "\nEmployee 2\nName: %s\nSalary: %.2f",e2.name,e2.salary);
  fclose(ptr);
  return 0;
}