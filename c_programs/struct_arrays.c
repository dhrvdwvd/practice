#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[10];
};

int main() {
  
  struct employee facebook[100];  // -> Array of structures.
  facebook[0].code = 100;
  facebook[0].salary = 101.10;
  strcpy(facebook[0].name, "em100");
  facebook[1].code = 101;
  facebook[1].salary = 102.10;
  strcpy(facebook[1].name, "em101");
  facebook[2].code = 102;
  facebook[2].salary = 103.10;
  strcpy(facebook[2].name, "em102");
  printf("Done!\n");
  return 0;

}