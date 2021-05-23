#include<stdio.h>
#include<conio.h>
#define FLUSH while(getchar()!='\n');

int main() {
	int num1,num2;
	int result;
	char ch;
	int flag=1;

	while(flag==1) {

	printf("\nEnter the 1st number : ");
	scanf("%d",&num1);
	printf("Enter the 2nd number : ");
    scanf("%d",&num2);

    FLUSH;

	printf("Enter your choice : ");
	scanf("%c",&ch);

	int *p;
	p=&num1;

	int *q;
	q=&num2;

	switch(ch)	{
		case '+':
		    result = *p + *q;
		    printf("The result is : %d", result);
		    break;

		case '-':
		    result = *p - *q;
		    printf("The result is : %d", result);
		    break;

		case '*':
		    result = *p * *q;
		    printf("The result is : %d", result);
		    break;

		case '/':
		    result = *p / *q;
		    printf("The result is : %d", result);
		    break;

		default:
			printf("Invalid Operation");
	}

	printf("\nEnter 1 to continue : ");
	scanf("%d",&flag);
	printf("\n");
	}
	return 0;
}
