#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1 = fopen("file1.txt","w");
    fprintf(fp1,"Prashanth.S - 19mid0020");
    fclose(fp1);

    fp1 = fopen("file1.txt","r");
    if (fp1 == NULL) {      perror("Oops...");        exit(-1);    }
    fp2 = fopen("file2.txt","w");
    if (fp2 == NULL) {      perror("Oops...");        exit(-1);    }

    printf("Contents in File 2 : ");
    while(1)
    {
        c = fgetc(fp1);
        if(feof(fp1))   break;
        if(isalpha(c))
        {
            fputc(toupper(c),fp2);
            printf("%c",toupper(c));
        }

        else
        {
            fputc(c,fp2);
            printf("%c",c);
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("\n\n");
    return 0;
}

