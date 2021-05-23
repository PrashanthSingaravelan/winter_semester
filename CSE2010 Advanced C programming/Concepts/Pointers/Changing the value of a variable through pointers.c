#include<stdio.h>
#include<conio.h>

int main() {

	int var1 = 10;
	int *ptr = &var1;

	printf("var1 value : %d",var1);
	printf("\n*ptr value : %d",*ptr);

	printf("\n\nValue is changed by a variable, var1 = 100");
	var1 = 100;

	printf("\nvar1 value : %d",var1);
	printf("\n*ptr value : %d",*ptr);

	printf("\n\nValue is changed by pointer, *ptr = 1000");
	*ptr = 1000;

	printf("\nvar1 value : %d",var1);
	printf("\n*ptr value : %d",*ptr);

	return 0;
}
