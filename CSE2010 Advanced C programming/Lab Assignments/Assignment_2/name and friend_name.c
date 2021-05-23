#include<stdio.h>
#include<conio.h>

#include<string.h>
#include<stdlib.h>

#define FLUSH while(getchar()!='\n');

int main() {
        int first_len = 0;
        int second_len = 0;
        int greater = 0;

        int similar = 0;
        int disimilar = 0;

        printf("Enter the length of your name : ");
        scanf("%d",&first_len);

        printf("Enter the length of friends name : ");
        scanf("%d",&second_len);

        if (first_len>=second_len) { greater = first_len;	}
        else { greater = second_len;	}

        printf("Enter your name : ");
        char *str1 = (char *)malloc(first_len * sizeof(char));
        scanf("%s",str1);

        FLUSH;

        printf("Enter your friends name : ");
        char *str2 = (char *)malloc(second_len * sizeof(char));
        scanf("%s",str2);

        FLUSH;

        for(int i=0;i<=greater;i++) {
                if (strcmp(str1[i],str2[i]) == 0) {
                        printf("%c",str1[i]);
                        similar+=1;     }
                else {
                    disimilar+=1;	}
    }
    printf("Number of Similar characters : %d",similar);
    printf("Number of DiSimilar characters : %d",disimilar);
    return 0;
    }
