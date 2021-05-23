#include<stdio.h>
#include<conio.h>

int main(int n)  {
	static int sum1 = 0;

    if (n<10)                {   sum1 = n + main(n+1);    }
    else if(n==10)      {   return n;   }

    printf("The sum is : %d\n",sum1);
    return 0;
}
