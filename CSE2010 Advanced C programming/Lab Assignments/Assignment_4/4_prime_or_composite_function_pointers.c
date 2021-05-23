#include<stdio.h>
#include<conio.h>

void prime_composite(int x) {
        int cnt = 0;
        for(int i=1;i<x;i++) {
            if (x%i==0) { cnt ++;}
        }
         if (cnt>2) {    printf("%d is a composite number",x);   }
         else          {     printf("%d is a prime number",x); }
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    void (*fun_ptr)(int n);

    fun_ptr = prime_composite;
    fun_ptr(n);
    return 0;
}



