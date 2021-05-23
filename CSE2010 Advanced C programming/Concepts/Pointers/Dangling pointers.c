#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    {
      int x = 12;
      ptr = &x;

    printf("Address of a variable : %d",ptr);
    printf("\nValue of a variable   : %d",*ptr);
    }

    //After coming out the scope of the x is deleted
    if (ptr) {    // ptr is dangling pointer
      printf("\nptr!=NULL : %d",ptr);
      printf("\nAddress of a variable : %d",ptr);
      printf("\nValue of a variable   : %d",*ptr);
    }
    *ptr = 100;   /*ptr is pointing to the same box, but x name is gone*/
    printf("\nValue of a variable   : %d",*ptr);
    
    printf("\nAfter making dangling pointer to NULL");
    ptr=NULL;   // making dangling pointer to normal pointer
    printf("\nAddress of a variable : %d",ptr);
    printf("\nValue of a variable   : %d",*ptr);

    return 0;
}