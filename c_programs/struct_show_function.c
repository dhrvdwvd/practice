#include<stdio.h>
#include<string.h>

struct employee{
  char name[20];
  int code;
  float salary;
};

void showstruct(struct employee emp){
	printf("Name:\t%s\n",emp.name);
	printf("Code:\t%d\n",emp.code);
	printf("Salary:\t%.2f\n",emp.salary);
}

int main() {
  struct employee e1={"Employee1",1001,10000.30};
  showstruct(e1);
  return 0;

}