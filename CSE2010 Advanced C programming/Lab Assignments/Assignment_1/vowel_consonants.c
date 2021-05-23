/*Prashanth.S 19MID0020*/

#include<stdio.h>
#include<conio.h>

#include<ctype.h>
#include<string.h>

int main() 
{	
	int n;
	printf("Enter the length of your name : ");
	scanf("%d",&n);
	
	char str1[n];
	printf("Enter your name : ");
    scanf("%s",str1);

	char vowel[] = "aeiou";
	
	for(int i=0;i<strlen(str1);i++) {
		if (str1[i] != ' ') {
	    str1[i] = tolower(str1[i]); }
	}
	
	int vowel_count = 0;
	int consonant_count = 0;
	int special_count = 0;
	int flag = 0;
	int special_flag=0;

    for(int i=0;i<strlen(str1);i++) {
        for(int j=0;j<strlen(vowel);j++) {
			if (str1[i] == vowel[j]) {
				flag = 1;
			    }
			else if (str1[i]=='b' || str1[i]=='h' || str1[i]=='s' || str1[i]=='p') {
				special_flag = 1;
                }
        }
        if (flag==1) {
            vowel_count = vowel_count + 1;     }
		if(flag==0){
		    consonant_count = consonant_count + 1; }
		if(special_flag==1) {
		    special_count = special_count + 1; }
        special_flag = 0;
		flag = 0; 
	}
	printf("\nvowel_count : %d",vowel_count);
	printf("\nconsonant_count : %d",consonant_count);
	printf("\nSpecial characters count : %d",special_count);

	return 0;
}



