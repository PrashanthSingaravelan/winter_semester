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
    struct date manufacture_date;
    struct date expiry_date;
    int package_no;
    char package_status[100];
};

int main() {
    int count=5;
    struct vaccine *ptr = malloc(sizeof(struct vaccine) * count);

    strcpy(obj1[0].vaccine_name,"Covishield");
    obj1[0].id = 1;
    obj1[0].manufacture_date.date = ;
    obj1[0].expiry_date.date = ;
    obj1[0].package_no = 10;
    strcpy(obj1[0].package_status,"open");


    return 0;
}
