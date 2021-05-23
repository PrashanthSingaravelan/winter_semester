#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>

int main() {
				// m days(rows) and n cities(columns)
	int m,n;
	printf("Enter the number of days : ");
	scanf("%d",&m);

	printf("Enter the number of cities : ");
	scanf("%d",&n);

	int *temp = (int *)malloc(m*n*sizeof(int));

	for(int i=0;i<m;i++) {
	    printf("Enter the temperature(celsius) of Day-%d  : ",i+1);
	    for(int j=0;j<n;j++) {
	        scanf("%d",&(*(temp + i*n+ j)));
	    }
	}

	int min = INT_MIN;
	int max = INT_MAX;

	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			if (*(temp + i*n + j)<max) 	   { max = *(temp + i*n + j); }
			else if (*(temp + i*n + j)>min) { min = *(temp + i*n + j); }
		}
        printf("\nDay-%d Maximum temperature(celsius) : %d",i+1,min);
		printf("\nDay-%d Minimum temperature(celsius)    : %d",i+1,max);
		printf("\n\n");

		min = INT_MIN;
	 	max = INT_MAX;
	}
	return 0;
}
