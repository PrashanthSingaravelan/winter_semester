#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
        char num1[30];
        printf("Enter the float number : ");
        scanf("%s",num1);

        printf("%s--> %f",num1,atof(num1));                   // method-1
        printf("\n%s --> %f",num1,strtof(num1, NULL)); // method-2
}
