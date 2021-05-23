#define CLEAN_BUFFER while(getchar()!='\n');
#include<stdio.h>
#include<conio.h>

struct bank {
    int id;
    char name[30];
    int balance;
};

int deposit(struct bank obj,int amt) {
        if (amt<0) { printf("Amount cannot be negative");   }
        else {  obj.balance = obj.balance + amt;    }
}

int withdraw(struct bank obj , int amt) {
    if (amt<obj.balance) {   obj.balance = obj.balance - amt;   }
    else {  printf("Amount exceeding the deposit"); }
}

int check_balance(struct bank obj)  {      return obj.balance;  }

int main()  {
        int n;
        printf("Enter the number of users : ");  scanf("%d",&n);

        struct bank obj[n];
        for(int i=0;i<n;i++) {
        printf("\nEnter the user_id : ");        scanf("%d",&obj[i].id);
        printf("Enter the user name : ");  scanf("%s",obj[i].name);
        printf("Enter the amount : ");       scanf("%d",&obj[i].balance);
        CLEAN_BUFFER;
        }

        printf("\n1: Deposit operation ");  printf("\n2: Withdrawn operation");  printf("\n3: Balance operation\n");

        for(int i=0;i<n;i++) {
                printf("\nUser - %d",i+1);

                int exp,amt;
                int start=1;
                while(start!=0) {
                    printf("\nMention the operation you want to perform : "); scanf("%d",&exp);
                    switch(exp) {
                        case 1: printf("Enter the amount to be deposited : "); scanf("%d",&amt);    obj[i].balance = deposit(obj[i],amt);   break;
                        case 2: printf("Enter the amount to be withdrawn : ");  scanf("%d",&amt);  obj[i].balance = withdraw(obj[i],amt); break;
                        case 3: printf("Your balance amount is : %d",check_balance(obj[i])); break;
                        }
                        printf("\nEnter 1 to continue and 0 to stop ");   scanf("%d",&start);
                }
                printf("User- %d is terminated",i+1);    printf("\n");
        }
        return 0;
}
