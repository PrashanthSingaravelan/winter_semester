#include<stdio.h>
#include<conio.h>
#include<stdarg.h>

double bill(int n,...) {
    double sum1=0;
    va_list arr1;
    va_start(arr1,n);
    for(int i=0;i<n;i++) { sum1 = sum1 + va_arg(arr1,int);}
    va_end(arr1);
    return sum1;
}

int main() {
    printf("Alex's Almart bill   : %f ",bill(5,100,150,200,250,300)); // Alex
    printf("\nAlan's Almart bill : %f ",bill(5,10,20,30,40,50));     // Alan
    return 0;
}
