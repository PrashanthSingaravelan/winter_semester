#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr1[10]; // global variable

int * getRandom() {   // return type is pointer
	
	printf("The array elements are : ");
	for(int i=0;i<10;i++) {
		arr1[i] = rand();
		printf("%d ",arr1[i]);
	}
	return arr1;
}

int main() {

	int *ptr;
	ptr = getRandom();
	printf("\nThe array elements are : ");
	for(int i=0;i<10;i++) {
		printf("%d ",*(ptr+i));
	}
	return 0;
}

