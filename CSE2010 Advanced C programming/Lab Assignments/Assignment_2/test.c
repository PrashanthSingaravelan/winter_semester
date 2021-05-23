#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define FLUSH while(getchar()!='\n');

int main() {
    int first_len = 0;
	int second_len = 0;
	int greater = 0;

	int similar = 0;
	int disimilar = 0;

	printf("Enter the length of your name : ");
	scanf("%d",&first_len);

	printf("Enter the length of friends name : ");
	scanf("%d",&second_len);

	char str1[first_len];
	char str2[second_len];

	if (first_len>=second_len) { greater = first_len;	}
	else { greater = second_len;	}

	printf("Enter your name : ");
	for(int i=0;i<first_len;i++)  {
        scanf("%c",&str1[i]);
	}

	FLUSH;

	printf("Enter your friend name : ");
	for(int i=0;i<second_len;i++)  {
        scanf("%c",&str2[i]);
	}

	printf("First string\n");
	for(int i=0;i<first_len;i++)  {
        printf("%c",str1[i]);
	}

	printf("\nSecond string");
	for(int i=0;i<second_len;i++)  {
        printf("%c",str2[i]);
	}


//printf("Number of Similar characters : %d",similar);
//printf("Number of DiSimilar characters : %d",disimilar);

return 0;
}
