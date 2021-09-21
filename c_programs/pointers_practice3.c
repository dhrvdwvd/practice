#include<stdio.h>
void tentimes(int* x);

/*******************************************
*    This program changes the value of a   *
*    variable to ten times its value using *
*    a function, and calling that function *
*    by only giving the reference of that  *
*    variable.                             *
*******************************************/

int main() {
  
  int t=3;
  //int* t_ptr;
  //t_ptr = &t;
  printf("Value before function call is %d\n",t);
  tentimes(&t);
  printf("Value after function call is %d\n",t);
  return 0;

}

void tentimes(int* x){
	(*x) = (*x)*10;
}