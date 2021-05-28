#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char str1[100] = "This is Prashanth";
    for(int i=0;i<strlen(str1);i++) {
            if(str1[i]!=' ') {  printf("%c",str1[i]);  }
    }

    return 0;
}
