#include<stdio.h>
#include<string.h>

struct vector{
  float x;
  float y;
};

struct vector sumvector(struct vector v1, struct vector v2){
	struct vector sum;
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;
	return sum;
}

int main(){
  float x,y;
  struct vector v1, v2;
  printf("Enter x and y components for v1: ");
  scanf("%f %f",&x,&y);
  v1.x = x;
  v1.y = y;
  printf("Components of vector v1: (%.2f, %.2f)\n",v1.x, v1.y);
  printf("Enter x and y components for v2: ");
  scanf("%f %f",&x,&y);
  v2.x = x;
  v2.y = y;
  printf("Components of vector v2: (%.2f, %.2f)\n",v2.x, v2.y);
  printf("\nComponents of vector v1 + v2: (%.2f, %.2f)\n",(sumvector(v1,v2)).x, (sumvector(v1,v2)).y);
  return 0;
}