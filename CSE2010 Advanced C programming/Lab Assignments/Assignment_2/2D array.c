#include<stdio.h>
#include<conio.h>

int main() {

	int arr1[5][5] = { {90,94,89,67,26},
				       {78,42,67,84,90},
				       {98,69,58,26,76},
				       {73,21,89,45,90},
				       {18,29,90,95,97}  };
	
	printf("The first element in every individual 1-D array");
	// pointer to an array (Array pointer)
	int (*ptr)[5];
	ptr = arr1;
	
	printf("%d ",*ptr[0]);
	printf("%d ",*ptr[1]);
	printf("%d ",*ptr[2]);
	printf("%d ",*ptr[3]);
	printf("%d ",*ptr[4]);
	
	return 0;
}

