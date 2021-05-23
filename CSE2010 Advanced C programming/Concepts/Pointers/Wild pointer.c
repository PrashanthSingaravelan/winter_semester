#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>
int main() {

	/*Segmentation fault (core dumped)
	int *ptr;
	*ptr = 12;
	printf("%d",*ptr);*/

	int num1 = 10;
	int *ptr = &num1;
	printf("Value of num1   : %d",*ptr);
	printf("\nAddress of num1 : %d",ptr);

	int num2 = 20;
	int *ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = num2;
	printf("\n\nValue of num2   : %d",*ptr2);
	printf("\nAddress of num2 : %d",ptr2);

	return 0;
}