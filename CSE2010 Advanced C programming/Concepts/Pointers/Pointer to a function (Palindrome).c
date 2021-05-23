#include<stdio.h>
#include<conio.h>
#include<string.h>

int ispalindrome(char *ptr1) {
    int str_len = strlen(ptr1);
    /*checking first and the last string*/
    for(int i=0;i<(str_len)/2;i++) {
    	if ( *(ptr1 + i)!= *(ptr1 + str_len - i -1)) {
                return 0;
    	}
    	else { return 1; }
    }
}

int main() {
	char str1[20];
	printf("Enter the string : ");
	gets(str1);

	if (ispalindrome(str1)) {
		printf("%s is a palindrome",str1); }
	else {
		printf("%s is not a palindrome",str1); }
	return 0;
}


