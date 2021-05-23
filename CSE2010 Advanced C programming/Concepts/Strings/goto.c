#include<stdio.h>
#include<conio.h>

int main() {
	int sum1=0;
	for(int i=0;i<=10;i++) {
		sum1 = sum1 + i;
		if (i==5) {
			goto addition;
		}
	}
addition:
printf("The sum is : %d",sum1);
return 0;
}