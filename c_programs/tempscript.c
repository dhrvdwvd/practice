#include<stdio.h>

int main(){
	char arr[2];
	printf("Enter 3 character: ");
	for(int i=0; i<2; i++){
		scanf("%c",&arr[i]);
	}
	for(int i=0; i<2; i++){
		printf("%d ", arr[i]);
	}
	// printf("String: %s", arr);
	printf("Enter two characters: ");
	gets(arr);
	puts(arr);
	printf("ASCII index of entered characters: ");
	for(int i=0; i<3; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}