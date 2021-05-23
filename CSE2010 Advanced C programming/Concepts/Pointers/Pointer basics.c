#include<stdio.h>
#include<conio.h>

int main() {

	int var1 = 10;
	int *ptr = &var1;

	printf("var1 value : %d",var1);
	printf("\n*ptr value : %d",*ptr);

	printf("\nptr value : %d",&var1);
	printf("\nAddress of var1 : %d",ptr);
	
	return 0;
}
