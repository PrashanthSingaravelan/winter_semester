#include<stdio.h>
#include<conio.h>
#define FLUSH while(getchar()!='\n');

void Grading(int average) {
    printf(" and the grade is : ");
	if (average>95) { printf("S-Grade\n"); }
	else if (average>=90 && average<=95) { printf("A-Grade\n"); }
	else if (average>=85 && average<90)  { printf("B-Grade\n"); }
	else if (average>=70 && average<85)  { printf("C-Grade\n");	}
	else if (average<70) {  printf("F-Grade\n");	}
}

void average1(int arr1[],int N) {
	int sum1 = 0;
	int average;

	int *ptr = arr1;

	for(int i=0;i<N;i++) {
		sum1 = sum1 + *ptr;
		ptr++;
	}
	average  = sum1/N;
	printf("Average mark is : %d",average);
	Grading(average);
}

void average2(int *ptr,int N) {
	int sum1 = 0;
	int average;

	for(int i=0;i<N;i++) {
		sum1 = sum1 + *(ptr + i);
	}
	average  = sum1/N;
	printf("Average mark is : %d",average);
	Grading(average);
}

int main()
{
	int N;
	printf("Enter the number of subjects : ");
	scanf("%d",&N);

	int arr1[N];

	printf("Enter the marks of individual subjects : ");
	for(int i=0;i<N;i++) {
        scanf("%d",&arr1[i]);
	}

    FLUSH;

	average1(arr1,N);
	printf("\n");
	average2(arr1,N);
	return 0;
}
