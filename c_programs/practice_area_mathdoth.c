#include<stdio.h>
#include<math.h>

int main() {
  int side;
  printf("This code calculates and displays the area of a sqaure.\n");
  printf("This code uses the funcitons available in the math.h header file.\n");
  printf("Enter the side of the square:\n");
  scanf("%d",&side);
  printf("Area of a square with side %d is %f\n",side,pow(side,2));
  return 0;

}