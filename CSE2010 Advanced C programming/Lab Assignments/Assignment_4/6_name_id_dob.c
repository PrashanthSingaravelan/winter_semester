#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

 struct Student {
        int id;
        char name[20];
        char data_of_birth[20];
};

int main() {
    int initial_n;
    FILE *fptr_write;
    fptr_write = fopen("6_name_id_dob.bin","ab+");
    if (!fptr_write) {  printf("Error in opening file");      exit(1);    }

    printf("Enter the number of students : "); scanf("%d",&initial_n);

    struct Student obj1[initial_n];

                                                    // writing the file (1st time)
    for(int i=0;i<initial_n;i++)        {
        printf("Enter the ID : ");            scanf("%d",&obj1[i].id);
        printf("Enter your Name : ");   scanf("%s",&obj1[i].name);
        printf("Enter your DOB : ");      scanf("%s",&obj1[i].data_of_birth);
        fwrite(&obj1, sizeof(struct Student), 1, fptr_write);
        printf("\n");
}
                                                        // reading from the file (1st time)
    FILE *fptr_read = fopen("4_name_id_dob.bin","rb+");
    if (!fptr_read)                      {      printf("Error in opening file");      exit(1);    }
    for(int i=0;i<initial_n;i++) {
        fread(&obj1, sizeof(struct Student), 1, fptr_read);
        printf("ID : %d \t Name : %s \t Date of birth : %s", obj1[i].id, obj1[i].name , obj1[i].data_of_birth);
        printf("\n");
    }

    int final_n;
    printf("\nSome students wants an immediate admission in the college");
    printf("\nEnter the number of students : ");      scanf("%d",&final_n);
    struct Student obj2[final_n];

                                                // writing the file (2nd time)
    for(int i=0;i<final_n;i++)      {
                printf("Enter the ID : ");             scanf("%d",&obj2[i].id);
                printf("Enter your Name : ");   scanf("%s",&obj2[i].name);
                printf("Enter your DOB : ");      scanf("%s",&obj2[i].data_of_birth);
                fwrite(&obj2, sizeof(struct Student), 1, fptr_write);
                printf("\n");
            }
                                            // reading from the file (2nd time)
    for(int i=0;i<final_n;i++) {
                fread(&obj2, sizeof(struct Student), 1, fptr_read);
                printf("ID : %d \t Name : %s \t Date of birth : %s", obj2[i].id, obj2[i].name , obj2[i].data_of_birth);
                printf("\n");
            }
                fclose(fptr_read);  // closing the read pointer
                fclose(fptr_write); // closing the write pointer
                return 0;
}
