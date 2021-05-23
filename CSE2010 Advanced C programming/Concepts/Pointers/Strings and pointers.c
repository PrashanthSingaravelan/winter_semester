#include<stdio.h>
#include<conio.h>

int main() {
	char str1[] = "Prashanth";  /*by default the last character is '\0'*/
	char * ptr;
	ptr = str1;

	printf("The string : ");
	while(*ptr!='\0') {
		printf("%c",*ptr);
		ptr++;
	}
	return 0;
}
