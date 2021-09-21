#include<stdio.h>
#include<string.h>

struct vector{
  float x;
  float y;
};

int main(){
  float x,y;
  printf("Enter x and y components: ");
  scanf("%f %f",&x,&y);
  
  struct vector v1 = {x, y};
  printf("Components of vector v1: (%.2f, %.2f)\n",v1.x, v1.y);
  return 0;
}