#include<stdio.h>
#include<conio.h>
#define maxsize 100

int main() {
	int arr1[maxsize];
	int *ptr = arr1;

	printf("Enter the elements in-to the array : ");
	for(int i=0;i<5;i++) {
		scanf("%d",(ptr+i));
	}

	printf("\nArray elements are : ");
	for(int i=0;i<5;i++) {
		printf("%d",*(ptr+i));
	}

	return 0;
}