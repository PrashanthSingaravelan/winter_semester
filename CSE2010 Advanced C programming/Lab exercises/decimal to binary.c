#include<stdio.h>
#include<conio.h>

void fun1(int n) {
	if (n!=0 && n!=1) {
		return fun1(n%2);
	}
	else {
		return 1
	}
}

int main() {
	int n = 5;
	fun1(n);
}

/*  With function
void fun1(int n) {
	int i;
	int a[64];
	
	while(n!=0) {
		a[i++] = n%2;
		n = n/2;
	}
	i=i-1;  // stands in a garbage value
	
	// For Display purpose
	for(;i>=0;i--) {
		printf("%d ",a[i]);
	}
}

int main() {
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	fun1(n);	
	return 0;
}
*/


/*  Using iterative
int main() {
	printf("Enter the number : ");
	scanf("%d",&n);
	
	int a[64];
	
	while(n!=0) {
		a[i++] = n%2;
		n = n/2;
	}
	i=i-1;  // stands in a garbage value
	
	// For Display purpose
	for(;i>=0;i--) {
		printf("%d ",a[i]);
	}
	return 0;
}*/