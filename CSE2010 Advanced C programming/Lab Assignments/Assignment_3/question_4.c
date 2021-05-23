#include<stdio.h>
#include<conio.h>

struct rectangle {    int length;     int breadth; }obj1;

struct square {    int side; }obj2;

struct circle    {   float radius;  }obj3;

int r_area(struct  rectangle obj) {  if ((obj.length>0) && (obj.breadth>0))   { return obj.length*obj.breadth; } else { printf("Provide positive values\n");  }   }
int s_area(struct square obj)      {  if (obj.side>0)     { return obj.side * obj.side; }                                                      else { printf("Provide positive values\n");  } }
float c_area(struct circle obj)     {  if (obj.radius>0) { return (3.14 * obj.radius * obj.radius); }                               else { printf("Provide positive values\n");  }  }

int main() {
    printf("1 : Rectangle");    printf("\n2 : Square");   printf("\n3 : Circle");
    int exp;
    printf("\nEnter your choice : "); scanf("%d",&exp);

    switch(exp) {

    case 1:
        printf("Enter the length and breadth : "); scanf("%d %d",&obj1.length,&obj1.breadth);
        printf("Rectangle area : %d",r_area(obj1));
        break;

    case 2:
        printf("Enter the side : ");  scanf("%d",&obj2.side);
        printf("Square area : %d",s_area(obj2));
        break;

    case 3:
         printf("Enter the radius : ");  scanf("%f",&obj3.radius);
         printf("Circle area : %f",c_area(obj3));
         break;

    }
    return 0;
}
