#include<stdio.h>
#include <stdlib.h>
#include<string.h>

struct date
{
        int day;
        int month;
        int year;
};

struct vaccine {
    char vaccine_name[100];
    int id;
    char porduction_company[100];
    char manufacture_date[100];
    char expiry_date[100];
    int package_no;
    char package_status[100];
};

// id's of the vaccine administered first with open and then not open
        void id_vaccine( struct vaccine *ptr) {
        printf("\nid's of the vaccine administered first with open and then not open\n");
        int max=-9999;
        printf("Package --> open\n");
         for(int i=0;i<4;i++) {
                if((ptr[i].id>max) && strcmp(ptr[i].package_status,"open")) {
                        max = ptr[i].id;
                        printf("%d  ",ptr[i].id);
                        printf("%s",ptr[i].vaccine_name);
                        printf("\n");
                }
         }

        int min=9999;
        printf("\nPackage --> not open\n");
         for(int i=0;i<4;i++) {
                if((ptr[i].id<min) && strcmp(ptr[i].package_status,"not open")) {
                        min = ptr[i].id;
                        printf("%d  ",ptr[i].id);
                        printf("%s",ptr[i].vaccine_name);
                        printf("\n");
                }
        }
    }


int main() {
    printf("\nPrashanth.S 19MID0020\n\n");
    int count=5;
    struct vaccine *obj1 = malloc(sizeof(struct vaccine) * count);

    strcpy(obj1[0].vaccine_name,"Covaxin");
    obj1[0].id = 1;
    strcpy(obj1[0].porduction_company,"abc");
    strcpy(obj1[0].manufacture_date,"12/4/2020") ;
    strcpy(obj1[0].expiry_date,"12/4/2020");
    obj1[0].package_no = 10;
    strcpy(obj1[0].package_status,"open");

///////////////////////////////////////////////////////////
    strcpy(obj1[1].vaccine_name,"Covishield");
    obj1[1].id = 2;
    strcpy(obj1[1].porduction_company,"efg");
    strcpy(obj1[1].manufacture_date,"24/7/2020") ;
    strcpy(obj1[1].expiry_date,"12/8/2021");
    obj1[1].package_no = 20;
    strcpy(obj1[1].package_status,"not open");

    ///////////////////////////////////////////////////////////

       strcpy(obj1[2].vaccine_name,"pfizer");
    obj1[2].id = 3;
    strcpy(obj1[2].porduction_company,"ijk");
    strcpy(obj1[2].manufacture_date,"15/3/2020") ;
    strcpy(obj1[2].expiry_date,"10/8/2021");
    obj1[2].package_no = 30;
    strcpy(obj1[2].package_status,"open");

    ///////////////////////////////////////////////////////////

       strcpy(obj1[3].vaccine_name,"retro");
    obj1[3].id = 3;
    strcpy(obj1[3].porduction_company,"pqr");
    strcpy(obj1[3].manufacture_date,"12/4/2020") ;
    strcpy(obj1[3].expiry_date,"22/6/2021");
    obj1[3].package_no = 40;
    strcpy(obj1[3].package_status,"not open");

    ///////////////////////////////////////////////////////////

    strcpy(obj1[4].vaccine_name,"asimmo");
    obj1[4].id = 1;
     strcpy(obj1[3].porduction_company,"xyz");
    strcpy(obj1[4].manufacture_date,"23/4/2020") ;
    strcpy(obj1[4].expiry_date,"25/6/2021");
    obj1[4].package_no = 50;
    strcpy(obj1[4].package_status,"open");

    ///////////////////////////////////////////////////////////
// nearing expiry date and vaccines not opened
printf("Vaccines nearing expiry date and not opened\n");
     for(int i=0;i<4;i++) {
         if(strcmp(obj1[i].package_status , "not open") == 0) {
                printf("%s",obj1[i].vaccine_name);
                printf("    %s",obj1[i].package_status);
                 printf("\n");
            }
        }

        // nearing expiry date and vaccines  opened
printf("\nVaccines nearing expiry date and opened\n");
        for(int i=0;i<4;i++) {
         if(strcmp(obj1[i].package_status , "open") == 0) {
                printf("%s",obj1[i].vaccine_name);
                printf("    %s",obj1[i].package_status);
                printf("\n");
            }
        }

        id_vaccine(obj1);

        return 0;
}
