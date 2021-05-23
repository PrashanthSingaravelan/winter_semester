#include<stdio.h>
#include<string.h>

struct stock{
    char stock_name[50];
    int stock_price;
    int stock_rating;
};

int main() {
    FILE *ptr1_write = fopen("agency-1.txt","w");
    FILE *ptr2_write = fopen("agency-2.txt","w");

    if((ptr1_write==NULL) && (ptr2_write==NULL)) {  printf("Error in opening the file");    }

    struct stock obj_agency1[10];       struct stock obj_agency2[10];

    strcpy(obj_agency1[0].stock_name,"stock-10");   obj_agency1[0].stock_price = 45;    obj_agency1[0].stock_rating = 1;
    strcpy(obj_agency1[1].stock_name,"stock-11");  obj_agency1[1].stock_price = 55;    obj_agency1[1].stock_rating = 4;
    strcpy(obj_agency1[2].stock_name,"stock-12");  obj_agency1[2].stock_price = 65;    obj_agency1[2].stock_rating = 6;
    strcpy(obj_agency1[3].stock_name,"stock-13");  obj_agency1[3].stock_price = 75;    obj_agency1[3].stock_rating = 7;
    strcpy(obj_agency1[4].stock_name,"stock-14");  obj_agency1[4].stock_price = 85;    obj_agency1[4].stock_rating = 10;
    strcpy(obj_agency1[5].stock_name,"stock-15");  obj_agency1[5].stock_price = 15;    obj_agency1[5].stock_rating = 11;
    strcpy(obj_agency1[6].stock_name,"stock-16");  obj_agency1[6].stock_price = 25;    obj_agency1[6].stock_rating = 14;
    strcpy(obj_agency1[7].stock_name,"stock-17");  obj_agency1[7].stock_price = 35;    obj_agency1[7].stock_rating = 15;
    strcpy(obj_agency1[8].stock_name,"stock-18");  obj_agency1[8].stock_price = 45;    obj_agency1[8].stock_rating = 18;
    strcpy(obj_agency1[9].stock_name,"stock-19");  obj_agency1[9].stock_price = 5;      obj_agency1[9].stock_rating = 19;

    strcpy(obj_agency2[0].stock_name,"stock-20");   obj_agency2[0].stock_price = 45;    obj_agency2[0].stock_rating = 2;
    strcpy(obj_agency2[1].stock_name,"stock-21");  obj_agency2[1].stock_price = 55;    obj_agency2[1].stock_rating = 3;
    strcpy(obj_agency2[2].stock_name,"stock-22");  obj_agency2[2].stock_price = 65;    obj_agency2[2].stock_rating = 5;
    strcpy(obj_agency2[3].stock_name,"stock-23");  obj_agency2[3].stock_price = 75;    obj_agency2[3].stock_rating = 8;
    strcpy(obj_agency2[4].stock_name,"stock-24");  obj_agency2[4].stock_price = 85;    obj_agency2[4].stock_rating = 9;
    strcpy(obj_agency2[5].stock_name,"stock-25");  obj_agency2[5].stock_price = 15;    obj_agency2[5].stock_rating = 12;
    strcpy(obj_agency2[6].stock_name,"stock-26");  obj_agency2[6].stock_price = 25;    obj_agency2[6].stock_rating = 13;
    strcpy(obj_agency2[7].stock_name,"stock-27");  obj_agency2[7].stock_price = 35;    obj_agency2[7].stock_rating = 16;
    strcpy(obj_agency2[8].stock_name,"stock-28");  obj_agency2[8].stock_price = 45;    obj_agency2[8].stock_rating = 17;
    strcpy(obj_agency2[9].stock_name,"stock-29");  obj_agency2[9].stock_price = 5;       obj_agency2[9].stock_rating = 20;

    fwrite(obj_agency1,sizeof(struct stock),10,ptr1_write);
    fwrite(obj_agency2,sizeof(struct stock),10,ptr2_write);

    fclose(ptr1_write); fclose(ptr2_write);

    FILE *ptr1_read = fopen("agency-1.txt","rb");
    FILE *ptr2_read  = fopen("agency-2.txt","rb");

    if((ptr1_read==NULL) && (ptr2_read==NULL)) {  printf("Error in opening the file");    }

    struct stock obj_agency3[10];
    struct stock obj_agency4[10];

    fread(obj_agency3,sizeof(struct stock),10,ptr1_read);
    fread(obj_agency4,sizeof(struct stock),10,ptr2_read);

    for(int i=0;i<10;i++) {
        if (obj_agency3[i].stock_rating >  obj_agency4[i].stock_rating) {
                        printf("\nAgency-1");
                        printf("    Stock Name : %s",obj_agency3[i].stock_name);
                        printf("    Stock Price   : %d",obj_agency3[i].stock_price);
                        printf("    Stock Rating : %d",obj_agency3[i].stock_rating);
        } else {
                        printf("\nAgency-2");
                        printf("    Stock Name : %s",obj_agency4[i].stock_name);
                        printf("    Stock Price   : %d",obj_agency4[i].stock_price);
                        printf("    Stock Rating : %d",obj_agency4[i].stock_rating);
        }
    }
     return 0;
    fclose(ptr1_read); fclose(ptr2_read);
}
