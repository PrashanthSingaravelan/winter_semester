#include<stdio.h>
#include<conio.h>

int main() {
	char a = 'A';
	char b = 'B';
	char c = 'C';

	char const *ptr1;  // or const char *ptr;
	//*ptr = 'B' --> Cannot able to change the value of the pointer variable
	// ptr = &b; --> Can able to change the pointer variable to point to another variable

	printf("char const *ptr1 (or) const char *ptr1\n");
	ptr1 = &a;
	printf("Value pointed by the ptr1 : %c",*ptr1);
	printf("\nValue of the ptr1 : %d",ptr1);

	ptr1 = &b;  
	printf("\nValue pointed by the ptr1 : %c",*ptr1);
	printf("\nValue of the ptr1 : %d",ptr1);

////////////////////////////////////////////////////////////////////////////////

	printf("\nchar * const ptr2\n");
	char * const ptr2 = &c;
	//*ptr2 = 'B' --> Can able to change the value of the pointer variable
	// ptr2 = &b; --> Cannot able to change the pointer variable to point to another variable

	printf("Value pointed by the ptr2 : %c",*ptr2);
	printf("\nValue of the ptr2 : %d",ptr2);

	*ptr2 = 'P';
	printf("\nValue pointed by the ptr2 : %c",*ptr2);
	printf("\nValue of the ptr2 : %d",ptr2);

////////////////////////////////////////////////////////////////////////////////
	printf("\nconst char * const ptr3");
	const char * const ptr3 = &c;
	//*ptr2 = 'B' --> Cannot able to change the value of the pointer variable
	// ptr2 = &b; --> Cannot able to change the pointer variable to point to another variable

	printf("\nValue pointed by the ptr3 : %c",*ptr3);
	printf("\nValue of the ptr3 : %d",ptr3);

	return 0;
}
