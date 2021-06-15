#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,i,y;
    char a[50],b[50];
    printf("ENTER THE INFORMATION BIT:");
    scanf("%s",&a);
    n=strlen(a);
    printf("INFORMATION AT SENDER:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c\t",a[i]);
        b[i]=a[i];
    }
    printf("\n");
    printf("1.TRANSMISSION WITHOUT CORRUPTION\n");
    printf("2.TRANSMISSION WITH CORRUPTION\n");
    printf("3.EXIT\n");
    do
    {
        printf("\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&y);
        switch(y)
        {
        case 1:
            noc(a,n);
            break;
        case 2:
            oc(a,n,b);
            break;
        case 3:
            exit(0);
        }y++;
    }while(y=3);
}
    void noc(char a[50],int n)
    {
    int i;
    char b[50];
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("\n");
          int e,d;
           for (e = 1; e <= 32767; e++)
              for (d = 1; d <= 32767; d++)
               {

               }

        printf("ACK %d",i+1);
        printf("\n");
    }
    printf("INFORMATION AT RECEIVER:");
    printf("\n");
    for(i=0;i<n;i++)
        printf("%c\t",b[i]);
    }
    void oc(char a[50],int n,char b[50])
    {

        int x,e,d,i;
        x=rand()%1000;
        if(x>0&&x<100)
            x=3;
        else if(x>=100&&x<500)
            x=1;
        else if(x>=500&&x<1000)
            x=2;
        else if(x>=1000)
            x=0;
        a[x]=' ';
        printf("\n");
    for(i=0;i<strlen(a);i++)
        {
            if(a[i]==' ')
              {
                  printf("FRAME %d NOT RECEIVED\n",i);
                  printf("RETRANSMITTING THE FRAME %......\n",i);
                  for (e = 1; e <= 32767; e++)
                     for (d = 1; d <= 32767; d++)
                        {

                        }
                        a[i]=b[x];
                  printf("SUCCESSFULLY RETRANSMITTED FRAME %\n",i);

              }
        }
        printf("INFORMATION AT RECEIVER END\n");
    for(i=0;i<strlen(a);i++)
        printf("%c",a[i]);
    printf("\n");



    }
