#include<stdio.h>
void wrong_tentimes(int x);

int main() {
  
  int t=4;
  printf("The value of t before function call is %d\n",t);
  wrong_tentimes(t);
  printf("The value of t after function call by value is %d\n",t);
  return 0;

}

void wrong_tentimes(int x){
  x = x * 10; 
}