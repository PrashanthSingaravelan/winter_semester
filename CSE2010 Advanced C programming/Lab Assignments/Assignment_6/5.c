#include<stdio.h>
#include<time.h>

int main()
    {
         struct tm *local;
         time_t t;
         t=time(NULL);
         local=localtime(&t);

         printf("%s",asctime(local));

         printf("Present day : %d",local->tm_mday);                     /* day of the month, range 1 to 31  */
         printf("\nPresent month : %d",(local->tm_m on) + 1);    /* month, range 0 to 11             */

         return 0;
    }
