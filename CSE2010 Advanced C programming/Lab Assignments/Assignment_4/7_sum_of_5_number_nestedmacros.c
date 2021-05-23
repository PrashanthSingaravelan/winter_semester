#include<stdio.h>
#include<conio.h>

#define First_Sum(x)   ((x-1) + (x))
#define Second_Sum(x)  (First_Sum(x-1) + (x))
#define Third_Sum(x)   (Second_Sum(x-1) + (x))
#define Fourth_Sum(x)  (Third_Sum(x-1) + (x))
#define Final_Sum(x)   (Fourth_Sum(x-1) + (x))

int main() {
    printf("The sum of first 5 numbers : %d",Final_Sum(5));
    return 0;
}


