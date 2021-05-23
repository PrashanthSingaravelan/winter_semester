#include<stdio.h>

int main()  {

    int n=11;
    for(int i=2;i<=9;i++) {
            if (n%i==0){
                    if ((n==2) || (n==3) || (n==5) || (n==7)) {  printf("Prime number");  break; }
                    if(n%i!=0) {    printf("Prime number");  break;  }
            }
            else if (n%i==0){
                printf("Composite number");
                break;
            }
    }
return 0;
}
