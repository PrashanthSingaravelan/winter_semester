#include<stdio.h>
#include<conio.h>

void Swap(int x,int y) {
    int temp; 
    temp = x;
    x = y;
    y = temp;
    printf("\nInside the function : ");
    printf("a = %d  and b = %d",x,y);
}

int main() {
    int a=10;
    int b=20;
    printf("Outside the function : ");
    printf("a = %d  and b = %d",a,b);
    Swap(a,b);
}