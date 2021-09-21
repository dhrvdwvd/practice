#include<stdio.h>
void disp2darray(int* arr, int rows, int columns);
int main() {
  
  int marks[3][4];
  int n_students=3, n_subjects=4;
  
  for(int i=0;i<n_students;i++){
	  for(int j=0;j<n_subjects;j++){
		  printf("Marks for student %d in subject %d\n",i+1,j+1);
		  scanf("%d",&marks[i][j]);
	  }
  }
  
  for(int i=0;i<n_students;i++){
	  for(int j=0;j<n_subjects;j++){
		  printf("Marks for student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
	  }
  }
  printf("\n\n");
  for(int i=0;i<n_students;i++){
	  for(int j=0;j<n_subjects;j++){
		  printf("Address of element %d is %u\n",marks[i][j],&marks[i][j]);
	  }
  }
  printf("\n\n");
  disp2darray(marks, n_students, n_subjects);
  return 0;

}

void disp2darray(int* arr, int rows, int columns){
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("%d\t",*(arr+i+j));
		}
		printf("\n");
	}
}