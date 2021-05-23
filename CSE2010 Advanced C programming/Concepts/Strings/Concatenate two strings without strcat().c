#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	char str1[100] = {"Hello"};
	char str3[100] = {"Hello"};
	char str2[100] = {" Good Morning"};

	/*Using strcat()*/
	strcat(str3,str2);
	printf("Using strcat() : %s",str3);
	
	int i,j;
	// j = strlen(str1);
	for(j=0;str1[j]!='\0';++j); 
	// now j will reach the '\0' character in str1 (similar to strlen(str1))
	
	for(i=0;str2[i]!='\0';++i,++j) {
		str1[j] = str2[i];
	}

	str1[j] = '\0';
	printf("\nWithout Using strcat() : %s",str1);

	return 0;
}

