#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
    int temp,size;

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    printf("Enter the array elements : ");
    int *arr1 = (int*)malloc(sizeof(int) * size);
    for(int i=0;i<size;i++) {
        scanf("%d",&temp);
        arr1[i] = temp;
    }

    int *positive_array  = (int *)malloc(sizeof(int));
    int *negative_array = (int *)malloc(sizeof(int));
    int positive_cnt  = 0;
    int negative_cnt = 0;

    for(int i=0;i<size;i++) {
        if (arr1[i]>0) {  positive_array[positive_cnt] = arr1[i] ; positive_cnt++;  }
        else             {   negative_array[negative_cnt] = arr1[i] ; negative_cnt++;  }
    }

    printf("+ve array : ");
    for(int i=0;i<positive_cnt;i++) {
        printf("%d  ",positive_array[i]);
    }

    printf("\n-ve array : ");
    for(int i=0;i<negative_cnt;i++) {
        printf("%d  ",negative_array[i]);
    }

return 0;
}
