#include<stdio.h>
#include<limits.h>

void Display(int A[],int n) {
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=n;j++) {
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}

int Minimum(int x,int y) {
		if (x<y) {
			return x; }
	else {
		return y; }
}

void FloydWarshall(int A[],int n) {

for(int k=0;k<n;k++) {

// matrix operation (so i,j)
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			A[i,j] = Minimum(A[i,j],(A[i,k]+A[k,j]));
			}
		}
	}

}

int main() {
	int x = 100;
	int n = 4;

	int A[4][4] = {
		{0,3,x,7},
		{8,0,2,x},
		{5,x,0,7},
		{2,x,x,0}
	};

	FloydWarshall(A,n);
	Display(A,n);
	return 0;
}