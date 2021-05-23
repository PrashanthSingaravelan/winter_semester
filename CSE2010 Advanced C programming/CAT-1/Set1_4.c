#include<stdio.h>
#include<math.h>

int fact(int n) {
    int p=n;
    int product=1;
    while (p!=0) {
        product = product * p;
        p = p-1;
    }
    return product;
}

int series(int n) {
        int sum1=0;
        for(int i=1;i<=n;i++)  {
            sum1 = sum1 + ( pow(i,i)/fact(i) );
        }
        return sum1;
}

int main()  {
    printf("Answer --> %d",series(3));

return 0;
}
