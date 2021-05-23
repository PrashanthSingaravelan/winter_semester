#include<stdio.h>

struct
{
    int mark1:10;
    int mark2:10;
    int mark3:10;
}obj1[3];


int main() {
    int temp;
    for(int i=0;i<3;i++) {
        printf("Enter the mark of student-%d ",i+1);
        scanf("%d",&temp);  obj1[i].mark1=temp;
        scanf("%d",&temp);  obj1[i].mark2=temp;
        scanf("%d",&temp);  obj1[i].mark3=temp;
    }

    for(int i=0;i<3;i++) {
        printf("\nMarks of student-%d ",i+1);
        printf("%d ",obj1[i].mark1);
        printf("%d ",obj1[i].mark2);
        printf("%d ",obj1[i].mark3);
    }

    return 0;
}

