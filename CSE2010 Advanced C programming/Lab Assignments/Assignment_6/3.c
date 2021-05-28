#include <stdio.h>
#include <string.h>

int main () {
   int length;
   char str1[100];
   char str2[100];
   printf("Enter string 1 : ");     gets(str1);
   printf("Enter string 2 : ");     gets(str2);
   length = strspn(str1, str2);

   printf("The length of matching initial segment : %d\n", length );
   return(0);
}
