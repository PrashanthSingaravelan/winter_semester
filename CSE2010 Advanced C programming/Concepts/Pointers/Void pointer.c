#include<stdio.h>
#include<conio.h>

int main() {
	int num1   = 10;
	float num2 = 20.67;

	void *ptr1,*ptr2;
	
	// typecasting ptr1 --> (int *)ptr1
	ptr1 = &num1;
	printf("\nValue of num1   : %d",*(int *)ptr1);    
	printf("\nAddress of num1 : %d",(int *)ptr1);

	ptr2 = &num2;
	printf("\nValue of num1   : %f",*(float *)ptr2);
	printf("\nAddress of num1 : %d",(int *)ptr2);

	return 0;
}
