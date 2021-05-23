#include<stdio.h>
int main()
{
	int n,i;
	char a[20];
	printf("Enter the length of the string:");
	scanf("%d",&n);
	printf("Enter your name:");

	for(i=0;i<n;i++)
	scanf("%s",&a[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]=='A')
			{
			printf(" A\n");
			printf(" A A\n");
			printf(" A A A\n");
			printf(" A A\n");
			printf("A A\n");
			printf("\n");
			}

		else if(a[i]=='H')
		{
		printf("H H \n");
		printf("H H \n");
		printf("HHHHH \n");
		printf("H H \n");
		printf("H H \n");
		printf("\n");
		}

		else if(a[i]=='N')
		{
		printf("N N \n");
		printf("N N N \n");
		printf("N N N \n");
		printf("N N N \n");
		printf("N N \n");
		printf("\n");
		}

		else if(a[i]=='P')
		{
		printf("PPPPPP \n");
		printf("P P \n");
		printf("PPPPPP \n");
		printf("P \n");
		printf("P \n");
		printf("\n");
		}

		else if(a[i]=='R')
		{
		printf("RRRRRRR \n");
		printf("R R \n");
		printf("RRRRRRR \n");
		printf("R R \n");
		printf("R R \n");
		printf("\n");

		}
		else if(a[i]=='S')
		{
		printf("SSSSSS \n");
		printf("S \n");
		printf("SSSSSS \n");
		printf(" S \n");
		printf("SSSSSS \n");
		printf("\n");
		}
		else if(a[i]=='T')
		{
		printf("TTTTTTT \n");
		printf(" T \n");
		printf(" T \n");
		printf(" T \n");
		printf(" T \n");
		printf("\n");
		}
	}
	return 0;
}


