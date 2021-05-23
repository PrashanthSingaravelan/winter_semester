#include<stdio.h>
#include<conio.h>

int Average(int *ptr,int N) {
	int sum1 = 0;
	int average = 0;
	
	for(int i=0;i<N;i++) {
	    sum1 = sum1 + *(ptr + i);
	}

	average = sum1/N;
	printf("Average : %d",average);
}

int main()
{
    int arr1[] = {90,91,92,95,89,70};
	int N = 6;
	
	int sum1 = 0;
	int average = 0;
	
	        /* Pointer to an array */
	int (*ptr)[5]; // int *ptr = arr1;
	ptr = &arr1;
	for(int i=0;i<N;i++) {
	    sum1 = sum1 + *(*ptr + i);
	}
	
	average = sum1/N;
	printf("Average : %d",average);

	Average(arr1,N);
	
    return 0;
}
