#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	char str1[100],str2[100],str3[100];
	int i;
	
	printf("Enter a string : ");
	scanf("%s",str1);

	for(i=0;str1[i]!='\0';i++) {
		str2[i] = str1[i];
	}
	str2[i] = '\0';  // assigning NULL to str2

	printf("String-1 : %s",str1);
	printf("\nString-2 : %s",str2);

	strcpy(str3,str1);  // using strcpy
	printf("\nString-2 : %s",str2);

	return 0;
}
