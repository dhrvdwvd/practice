#include<stdio.h>
#include<string.h>

// typedef is used to create an alias (nickname)
typedef struct employee{
  char name[20];
  int code;
  float salary;
} emp;

void showstruct(emp e1){
	printf("Name:\t%s\n",e1.name);
	printf("Code:\t%d\n",e1.code);
	printf("Salary:\t%.2f\n",e1.salary);
}

int main() {
  emp e1={"Employee1",1001,10000.30};
  showstruct(e1);
  return 0;

}