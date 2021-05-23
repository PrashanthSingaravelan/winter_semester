#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int* arr2 = NULL;   // global array

int* square_arr1(int *ptr,int n) {
    arr2 = calloc(n, sizeof(char));
    for(int i=0;i<n;i++) {      arr2[i] =(ptr[i]) * (ptr[i]);   }
    return (&arr2);
}

int main() {
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr1[n];

    printf("Enter the array elements : ");
    for(int i=0;i<n;i++) {   scanf("%d",&arr1[i]);   }

    int *ptr = square_arr1(arr1,n);
    printf("The square of array elements : ");
    for(int i=0;i<n;i++)   {    printf("%d ",ptr[i]);    }
    return 0;
}



