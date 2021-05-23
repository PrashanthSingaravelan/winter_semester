#include<stdio.h>
#include<conio.h>

int main() {
	int arr1[5] = {100,110,120,130,140};
	int *ptr = arr1;

	for(int i=0;i<=4;i++) {
		printf("\narr1[%d] : %d , ptr+%d : %d and *ptr+%d : %d",
			i,*ptr,i,(ptr+i),i,(*ptr+i) );
		ptr++;
	}
printf("\nFinal");
printf("ptr:%d and *ptr:%d",(ptr),(*ptr));
	return 0;
}