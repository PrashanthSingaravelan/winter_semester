#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int count=0,count1=0,count2=0,k=0,g=0;
    int a,b,i,j,c,x;
    char *ptr;
    char *ptr1,*ptr2,*ptr3;

    char temp[50],sim1[50],temp1[50];
    char name[50],fname[50],sim[50];
    char str[100],str1[100];

    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your friend's name : ");
    scanf("%s",&fname);
    ptr=&name;
    ptr1=&fname;

    a=strlen(ptr);
    b=strlen(ptr1);

    for(i=0;name[i]!='\0';++i)
    {
      for(j=0;fname[j]!='\0';++j)
            {
          if(name[i]==fname[j])
                sim[k++]=name[i];
                ptr1++;
            }
      ptr++;
    }

    c=k;
    printf("\n");
    for (int i = 0; i < c; i++)
    {
       for (j = 0; j < count2; j++)
        {
            if (sim[i] == temp[j])
                break;
        }
       if (j == count2)
       {
         temp[count2] = sim[i];
         count2++;
       }
  }

printf("Similar characters: ");
for (int i = 0; i < count2; i++)
printf("%c ", temp[i]);
printf("\n");
printf("Similar characters count : %d",count2);
printf("\n");
strcpy(str,name);
strcpy(str1,fname);
strcat(str,str1);
x=strlen(str);
ptr2=&str;
ptr3=&sim;

for(i=0;str[i]!='\0';++i)
    {
      for(j=0;sim[j]!='\0';++j)
      {
          if(str[i]!=sim[j])
              sim1[g++]=str[i];
          ptr3++;
      }
      ptr2++;
  }

    printf("\n");
    for (int i = 0; i < g; i++)
    {
       for (j = 0; j < count1; j++)
       {
          if (sim1[i] == temp1[j])
            break;
       }
       if (j == count1)
       {
         temp1[count1] = sim1[i];
         count1++;
       }
  }

    printf("Dissimilar characters count :%d",count1-count2);
    printf("\n");
    return 0;
}
