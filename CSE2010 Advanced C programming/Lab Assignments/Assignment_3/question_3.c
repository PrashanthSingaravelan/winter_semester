#define CLEAN_BUFFER while(getchar()!='\n');
#include<stdio.h>
#include<conio.h>
#include<limits.h>

 struct employee {
        int id;
        char name[30];
        char desig[30];
        int salary;
        char address[30];
};

void print(struct employee obj1[],int n)   {
    for(int i=0;i<n;i++) {
            printf("Employee-details");
            printf("\nID : %d",obj1[i].id);
            printf("\nName : %s",obj1[i].name);
            printf("\nDesignation : %s",obj1[i].desig);
            printf("\nSalary : %d",obj1[i].salary);
            printf("\nAddress : %s",obj1[i].address);
            printf("\n\n");
    }
}

void salary_max(struct employee *ptr,int n)         {
            int maxi_salary = INT_MIN;
            int person = 0;

            for(int i=0;i<n;i++) {
            if ((maxi_salary)<ptr->salary)  {
                    maxi_salary = ptr->salary;
                    person = i;
                }
                ptr++;
            }

            printf("\nMaximum salary of %d belongs to employee-%d : ",maxi_salary,(person+1));
}

void get_data(struct employee obj1[],int n) {
    int id = 0;
    for(int i=0;i<n;i++) {
            printf("\nEnter Employee-%d details",i+1);
            id+=1; obj1[i].id = id;
            printf("\nEnter your name : ");        scanf("%d",&obj1[i].name);
            CLEAN_BUFFER;
            printf("Enter your designation : ");  scanf("%s",obj1[i].desig);
            printf("Enter the Salary : ");               scanf("%d",&obj1[i].salary);
            printf("Enter your address : ");         scanf("%s",obj1[i].address);
    }
}

int main()
{
                int n;
                printf("Enter the number of employees : ");
                scanf("%d",&n);
                struct employee obj1[n];
                get_data(obj1,n);
                salary_max(obj1,n);
                return 0;
}
