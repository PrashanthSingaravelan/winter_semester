#include<stdio.h>

int main() {
	int *ptr = NULL;
	if (!ptr) {    /*if (ptr==NULL)*/
		printf("The value of ptr : %d",ptr);	
	}

	else if(ptr) {  /*if (ptr!=NULL)*/
		printf("The value of ptr : %d",ptr);
	}

	return 0;
}