#include<stdio.h>

int main() {
	int num1=2,num2=3,sum1=0,mul1=0,div1=1;
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	ptr1 = &num1;
	ptr2 = &num2;

	sum1 = *ptr1 + *ptr2;
	mul1 = *ptr1 * *ptr2;
	div1 = *ptr1 / *ptr2;

	printf("Sum : %d",sum1);
	printf("\nProduct : %d",mul1);
	printf("\nDivide : %d",div1);

	return 0;
}