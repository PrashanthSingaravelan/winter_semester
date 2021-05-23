/*Prashanth.S 19MID0020*/

#include<stdio.h>
#include<conio.h>
int main() 
{
	// row --> index number of the words
	// column --> particular character in that word

	printf("The data-base is \n");

	char name[][20]	= {"Sachin" , "Dravid" , "Raina"};
	int score[3] = {90,34,79};
	
	for(int i=0;i<3;i++) {
		printf("%s scores : %d runs\n",name[i],score[i]);
	}
	printf("Highest hitter  ");

	((score[0]>score[1]) && (score[0]>score[2])) ?   // 1st if
		printf("%s scored %d",name[0],score[0]):  

		(score[1]>score[2]) ?  // 2nd if
			printf("%s who scored %d runs ",name[1],score[1]):
			printf("%s who scored %d",name[2],score[2]);
	return 0;
}


