#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    fflush(stdin);

    char string1[100];
    char string2[n];

    char *ptr1 = string1;
    char *ptr2 = string2;

    printf("Enter any string : ");
    gets(string1);

    while(n>0){
        *(ptr2) = *(ptr1);
            ptr1++;
            ptr2++;
        n--;
    }
    *(ptr2++) = '\0';

    printf("First string = %s\n", string1);
    printf("Second string = %s\n", string2);

    return 0;
}
