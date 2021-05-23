#include<stdio.h>
const int max = 3;

int main() {
	int arr1[] = {10,20,30};
	int *ptr1;

	ptr1 = arr1; 

	printf("\nIncrementing ptr1 for each and every array element\n");

	printf("\nForward Array\n");
	for(int i=0;i<max;i++) {
		printf("Address of arr1[%d] : %x\n", i, ptr1);
      	printf("Value of arr1[%d]   : %d\n", i, *ptr1);
		ptr1++;  // will increment 4 bytes(int)
	}

	ptr1--;  // getting ptr to point to the last element of an array

	printf("\nBackward Array\n\n");
	for(int i=max;i>0;i--) {
		printf("Address of arr1[%d] : %x\n", i, ptr1);
      	printf("Value of arr1[%d]   : %d\n", i, *ptr1);
		ptr1--;  // will increment 4 bytes(int)
	}
	return 0;
}