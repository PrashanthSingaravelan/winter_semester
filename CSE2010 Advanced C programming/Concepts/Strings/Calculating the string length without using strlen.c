#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	char str1[100];
	int str_len = 0;
	int i;
	
	printf("Enter a string : ");
	scanf("%s",str1);

	for(i=0;str1[i]!='\0';i++) {
		str_len = str_len + 1;
	}

	printf("The length of a string %s   : %d",str1,str_len);
	printf("\nThe length of a string %s : %d",str1,strlen(str1)); // using string length function
	
	return 0;
}