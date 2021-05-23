#include<stdio.h>
#include<conio.h> 

int main() {
	int arr1[5] = {1,2,3,4,5};
	int *ptr;

	ptr  = &arr1[2];
	*ptr = -1;

	*(ptr+1) = 0;
	*(ptr-1) = 1;

	ptr = arr1;

	printf("%d",*arr1);
	printf("\n%d",*ptr);

	for(int i=0;i<5;i++) {
		//printf("\n%d and %d",*(ptr+i),*(arr1+i) );
	}

	return 0;
}