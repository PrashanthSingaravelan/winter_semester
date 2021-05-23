#include<stdio.h>
#include<conio.h>

int fun1(int n) {
    if (n>100) {  return ;   }
    else {
        if (n%10==1)  {  printf("\n%d   ",n);  fun1(n+1); }
        else {    printf("%d    ",n);  fun1(n+1);   }
    }
}

int main()  {
            printf("The pattern is : ");
            fun1(1);
            return 0;
}
