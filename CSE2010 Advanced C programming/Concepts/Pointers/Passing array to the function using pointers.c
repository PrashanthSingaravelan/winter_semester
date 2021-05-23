#include<stdio.h>
#include<conio.h>

double mone_getaverage(int *ptr,int size) {
	int sum1 = 0;
	for(int i=0;i<size;i++) {
		sum1 = sum1 + ptr[i];
	}
	return (sum1/size);
}

double mtwo_getaverage(int *ptr,int size) {
	int sum1 = 0;
	for(int i=0;i<size;i++) {
		sum1 = sum1 + *ptr;
		ptr++;
	}
	return (sum1/size);
}

int main() {

	int balance[5] = {10,20,30,40,50};
	
	double average = mone_getaverage(balance,5);
	printf("Method-1 Average value is : %f",average);

	average = mtwo_getaverage(balance,5);
	printf("\nMethod-2 Average value is : %f",average);
	return 0;
}