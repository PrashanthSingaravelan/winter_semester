/*Prashanth.S 19MID0020*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

/* global variable declaration */
int balance_amount = 4000000;

void Balance_checking() {
	printf("Your balance amount : %d",balance_amount);
}

void Cash_withdrawl() {
	int amount_withdraw;
	printf("Enter the amount to be withdrawn : ");
	scanf("%d",&amount_withdraw);

	if (amount_withdraw <= balance_amount) {
		printf("Your amount is : %d",amount_withdraw);
		balance_amount = balance_amount - amount_withdraw;
	}
	else {
		printf("Your balance is not sufficient");
	}
}

void Cash_deposition() {
	int amount_deposit;
	printf("\nEnter the amount to be depositted : ");
	scanf("%d",&amount_deposit);
	printf("\nYour depositted amount is : %d",amount_deposit);
	balance_amount = balance_amount + amount_deposit;
	}

void Quit() {
	printf("Thank You, visit again");
}

int main()
{
	char pin[] = {"19MID0020"};
	char user_pin [] = {};
	
	int flag = 0;
	int expression;

	                        /* Taking input from the user */
	printf("Enter the PIN : ");
	scanf("%s",user_pin);

	int key = strcmp(pin,user_pin);
	if (key==0)	{

		printf("Enter the balance_amount : ");
		scanf("%d",&balance_amount);

		printf("Option-1   : Balance_checking");
		printf("\nOption-2 : Cash_withdrawl");
		printf("\nOption-3 : Cash_deposition");
		printf("\nOption-4 : Quit");

		printf("\nEnter 0:Continue and -1:Quit : ");
		scanf("%d",&flag);

		while(flag==0) {
		    printf("\nEnter your options : ");
		    scanf("%d",&expression);

			switch (expression) {
				case 1:
					Balance_checking();
					break;
				case 2:
					Cash_withdrawl();
					break;
				case 3:
					Cash_deposition();
					break;
				case 4:
					Quit();
					break;
				default:
					printf("Your Service is expired"); 
			}
			printf("\nEnter 0:Continue and -1:Quit : ");
			scanf("%d",&flag); 
		} 
	}

	else {
		printf("Your PIN is invalid");
	}

	return 0;
}
