#include<stdio.h>
#include<conio.h>

void Grading(int average) {
    printf(" and the grade is : ");

	if (average>95) {
		printf("S-Grade\n");
	}

	else if (average>=90 && average<=95) {
		 printf("A-Grade\n");
	}

	else if (average>=85 && average<90)  {
		printf("B-Grade\n");
	}

	else if (average>=70 && average<85) {
		printf("C-Grade\n");
	}

	else if (average<70) {
		printf("F-Grade\n");
	}
}

int main() {

int student_count;
int subject_count;

printf("Enter the number of students : ");
scanf("%d",&student_count);

printf("Enter the number of subjects : ");
scanf("%d",&subject_count);

int arr1[student_count][subject_count];

for(int i=0;i<student_count;i++) {
            printf("Enter the marks of student%d : ",i+1);
            for(int j=0;j<subject_count;j++) {
                scanf("%d",&arr1[i][j]);
            }
}

int sum1=0;
int average = 0;

for(int i=0;i<student_count;i++) {
    for(int j=0;j<subject_count;j++) {
        sum1 = sum1 + *(*(arr1+i)+j);
        }
                average = sum1/subject_count;
                printf("Average mark is : %d",average);
                Grading(average);
                sum1=0;
	}
	return 0;
}
